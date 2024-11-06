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
		cout << endl << "\t\t\t����. STL" << endl;
		cout << "1. ��������� ������ �������." << endl;
		cout << "2. ��������� ������ �� �����." << endl;
		cout << "3. ������� ������ � ����." << endl;
		cout << "4. ������� �������� 7." << endl;
		cout << "5. ��������� ������." << endl;
		cout << "0. �����." << endl;
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
			cout << endl << "������� ���������:";
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