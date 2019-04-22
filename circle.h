#pragma once
#include"shape.h"

class circle:public shape
{
	float radius;
public:
	float area()
	{
		return (pow(radius,2)*22)/7;
	}
	circle();
	circle(float,string);
	circle(const circle &);
	~circle();
};