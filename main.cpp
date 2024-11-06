#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <windows.h>
#include <conio.h>
#include "funcs.h"

using namespace std;

void menu(Text& T,ifstream& fin,ofstream& fout)
{
	
	while (true)
	{
		fin.open("input.txt", ios::in | ios::binary);
		fout.open("output.txt");
		cls;
		cout << T;
		cout << endl << "\t\t\tМеню. STL" << endl;
		cout << "1. Заполнить массив словами." << endl;
		cout << "2. Заполнить массив из файла." << endl;
		cout << "3. Вывести массив в файл." << endl;
		cout << "4. Задание варианта 7." << endl;
		cout << "5. Отчистить массив." << endl;
		cout << "0. Выход." << endl;
		switch (_getch())
		{
		case '1':
		{
			cls;
			cin >> T;
			continue;
		}
		case '2':
		{
			fin >> T;
			fin.close();
			continue;
		}
		case '3':
		{
			fout << T;
			fout.close();
			continue;
		}
		case '4':
		{
			cout << endl << "Введите подстроку:";
			string podstring;
			cin >> podstring;
			T.Variant(podstring);
			continue;
		}
		case '5':
		{
			T.clear();
			continue;
		}
		case '0':
		{
			exit(1);
		}
		}
	}
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ifstream fin;
	ofstream fout;
	Text t1;
	Text t22414124214214214124;
	menu(t1, fin, fout);
	cout << "Hello World!" << endl;
	cout << "Hello World 2!" << endl;
}