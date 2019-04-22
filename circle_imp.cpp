#include"shape.h"
#include"circle.h"

circle::circle()
{
	cout<<"default constructor for circle is invoked"<<endl;
}

circle::circle(float radius,string color)
{
	
	this->radius=radius;
	this->color=color;
	cout<<"parameterized constructor for circle was invoked"<<endl;
}

circle::circle(const circle& other)
{
	this->radius=other.radius;
	this->color=other.color;
	cout<<"copy constructor for circle was invoked"<<endl;
}

circle::~circle()
{
	cout<<"destructor for circle is invoked"<<endl;
}