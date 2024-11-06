#pragma once
#ifndef FUNCS_H
#define FUNCS_H

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <windows.h>
#include <fstream>
#include <algorithm>
#define cls system("cls")

using namespace std;

class Text 
{
	size_t size;
	vector<string> vctr;
public:

	Text();
	Text(const Text& T) : size(T.size), vctr(T.vctr) {}
	Text(size_t _size) : size(_size) {}
	~Text();

	void clear();
	bool isempty();
	void Out(ostream&)const;
	void In(istream&);
	void Variant(string);
};

ostream& operator<<(ostream&, const Text&);
istream& operator>>(istream&, Text&);

#endif