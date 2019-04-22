
#include"shape.h"

shape::shape()
{
	cout<<"default constructor for shape is invoked"<<endl;
}
shape::shape(string color)
{
	this->color=color;
	cout<<"parameterized constructor for shape is invoked"<<endl;
}
shape::shape(string type,string color)
{
	this->type=type;
	this->color=color;
	cout<<"parameterized constructor for shape is invoked"<<endl;
}

shape::shape(const shape&other)
{
	this->type=other.type;
	this->color=other.color;
	cout<<"copy constructor for shape is invoked"<<endl;
}
shape:: ~shape()
{
	cout<<"destructor for shape is invoked"<<endl;
}