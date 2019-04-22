#include"shape.h"
#include"triangle.h"

triangle::triangle()
{
	cout<<"default constructor for triangle is invoked"<<endl;
}
triangle::triangle(float base,float height,string color)
{
	this->base=base;
	this->height=height;
	this->color=color;
	cout<<"parameterized constructor for triangle was invoked"<<endl;
}
triangle::triangle(const triangle& other)
{
	this->base=other.base;
	this->height=other.height;
	this->color=other.color;
	cout<<"copy constructor for triangle was invoked"<<endl;
}
triangle::~triangle()
{
	cout<<"destructor for triangle is invoked"<<endl;
}