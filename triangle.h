#pragma once
#include"shape.h"

class triangle:public shape
{
	float base;
	float height;	
public:
	float area()
	{
		return (base*height)/2;
	}
	triangle();
	triangle(float,float,string);
	triangle(const triangle&);
	~triangle();
};