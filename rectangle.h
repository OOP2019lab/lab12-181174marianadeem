#pragma once
#include"shape.h"

class rectangle:public shape
{
	float length;
	float width;
public:
	float area()
	{
		return length*width;
	}
	rectangle();
	rectangle(float,float,string);
	rectangle(const rectangle &);
	 ~rectangle();
};