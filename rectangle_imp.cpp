#include"shape.h"
#include"rectangle.h"

rectangle::rectangle()
{
	cout<<"default constructor  is invoked"<<endl;
}

rectangle::rectangle(float l,float w,string c)
{
	this->length=l;
	this->width=w;
	this->color=c;
}
rectangle::rectangle(const rectangle &other)
{
	this->length=other.length;
	this->width=other.width;
	this->color=other.color;

}

rectangle::~rectangle()
{
	cout<<"destructor for rectangle is invoked"<<endl;
}