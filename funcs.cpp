#include "funcs.h"

void Text::clear()
{
	size = 0;
	vctr.clear();
}

Text::Text()
{
	size = 0;
}

Text::~Text()
{
	clear();
}

bool Text::isempty()
{
	bool e = vctr.empty();
	return e;
}

void Text::Out(ostream& fout)const
{
	if (vctr.empty())
	{
		fout << "Массив пуст.";
		fout << "Hello World!";
	}
	else
	{
		for (const auto& it : vctr)
		{
			fout << it << " ";
		}
		fout << endl;
	}
}

void Text::In(istream& fin)
{
	size_t _size = 0;
	if(&fin == &cin)
	cout << "Введите размер вектора: ";
	fin >> _size;
	vector<string> arr(_size);
	for (size_t i = 0; i < _size; i++)
	{
		fin >> arr[i];
	}
	clear();
	size = _size;
	_size = 0;
	vctr = arr;
	arr.clear();
	vctr.resize(size);
}


istream& operator>>(istream& in, Text& V)
{
	V.In(in);
	return in;
}

ostream& operator<<(ostream& out, const Text& V)
{
	V.Out(out);
	return out;
}

void Text::Variant(string podstring)
{
	size_t pssize = podstring.length();
	for (size_t i = 0; i < size; i++)
	{
		size_t vctrsize = vctr[i].size();
		string::size_type pos = vctr[i].find(podstring);
		if (vctrsize > pssize * 2 && pos == 0)
		{
			vctr[i].erase(pos, podstring.size());
		}
	}
}