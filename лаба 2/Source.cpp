#include <iostream>
#include <vector>
#include <string>

//1

std::string converter(int num, int sys)
{
	std::string res = "";
	auto begin = res.begin();

	while (num > 0) 
	{
		res.insert(begin, '0' + num % sys + 7 * (num % sys >= 10));
		num = num / sys;
	}

	return res;
}

//2

int reconverter(const std::string & num, int sys)
{
	int res = 0;
	int rut = num.size();

	for (auto i = 0; i < rut; i++)
	{
		res = res + (num[i] - ('0' + 7 * (num[i] > '9'))) * std::pow(sys, rut - i - 1);
	}
	return res;
}

//3

std::vector<std::string> split(std::string str, char rut) 
{
	std::string x = "";
	std::vector<std::string> res = {};

	for (auto y : str) 
	{
		if (y == rut)
		{
			res.push_back(x);
			x = "";
		}
		else 
		{
			x = x + y;
		}
	}
	res.push_back(x);
	return res;
}

//4

void swap(int & x, int & y)
{
	x = x + y;
	y = x - y;
	x = x - y;
}

void sort(std::vector<int>& x)
{
	int rut = x.size();

	for (int i = 0; i < rut; i++)
	{
		for (int j = 0; j < rut; j++)
		{
			if (x[i] < x[j])
			{
				swap(x[i], x[j]);
			}
		}
	}
}