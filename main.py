import pandas as pd
import matplotlib.pyplot as plt

data = pd.read_csv("data.csv",delimiter = ',')

avg_income = data['MonthlyIncome'].mean()
data.fillna({'MonthlyIncome':avg_income}, inplace = True)

mask = data['DebtRatio'] > 1
data.loc[mask,'DebtRatio'] /= data.loc[mask,'MonthlyIncome']

data_limited = data.copy()
data_limited['MonthlyIncome'] = data_limited['MonthlyIncome'].clip(upper=25000)

selected_data = data_limited[['age', 'MonthlyIncome', 'NumberOfDependents']]

pd.plotting.scatter_matrix(selected_data, figsize=(10, 10), diagonal='kde', color='blue', alpha=0.6)

plt.suptitle("Matrix")
plt.show()



#plt.figure(figsize=(10, 6))

#sns.kdeplot(notserious_dlqin['MonthlyIncome'], color='blue', fill=True, label='Не серьёзная задолженность', common_norm=True)

#sns.kdeplot(serious_dlqin['MonthlyIncome'], color='red', fill=True, label='Серьёзная задолженность', common_norm=True)

#plt.xlim(0, 25000)

# Label the plot
#plt.xlabel('Месячный доход')
#plt.ylabel('Плотность')
#plt.title('Нормированные плотности распределения')
#plt.legend()
#plt.show()


#plt.figure(figsize=(10,6))

#plt.scatter(notserious_dlqin['age'], notserious_dlqin['DebtRatio'], color='blue', alpha=0.5, label='Несерьезная просрочка')
#plt.scatter(serious_dlqin['age'], serious_dlqin['DebtRatio'], color='red', alpha=0.5, label='Серьезная просрочка')

#plt.xlabel('Возраст')
#plt.ylabel('Долг')
#plt.legend()
#plt.show()

#probability_1 = data['SeriousDlqin2yrs'].groupby(data['NumberOfDependents']).mean()
#probability_2 = data['SeriousDlqin2yrs'].groupby(data['NumberRealEstateLoansOrLines']).mean()

#print(probability_1)
#print(probability_2)