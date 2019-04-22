#pragma once
#include<cmath>
#include <iostream>
#include<string>
using namespace std;

class shape
{
protected:
	string type;
public:
	string color;
	virtual float area()
	{
		return 0.0;
	}
	shape();
	shape(string);
	shape(string,string);
	shape(const shape&);
	virtual ~shape();
};