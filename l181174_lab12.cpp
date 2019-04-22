// l181174_lab12.cpp : Defines the entry point for the console application.
//
#include"shape.h"
#include"rectangle.h"
#include"triangle.h"
#include"circle.h"
#include<conio.h>

float sumArea(shape*a,shape*b)
{ 
	return (a->area())+(b->area());
}

void printarea(shape *s)
{
	for(int i=0;i<5;i++)
	{
		cout<<s[i].area()<<endl;
	}
}

int main()
{
	//int sumArea(*shape,*shape);
	triangle t1(1.0,9.0, "Red");
	circle c1(2, "Blue");
	rectangle r1(6,2, "Orange");
	cout<<t1.area();
	cout<<t1.color;
	cout<<c1.area();
	cout<<r1.area();
	shape *sptr= &t1;
	shape &sref=r1;
	cout<< sptr->area();
	cout<< sptr->color;
	cout<< sref.color;
	cout<< sref.area();

	triangle t2(1.0,9.0, "Red");
	circle c2(2, "Blue");
	rectangle r2(6,2, "Orange");
	shape s2("Purple");
	cout<<sumArea(&t2,&c2);
	cout<<sumArea(&s2,&r2);
	cout<<sumArea(&s2,&t2);

	float baseT;
	float heightT;
	string color;
	int count= 5;
	shape *Array[5]; 
	for(int i=0; i<count;)
	{
		cout << "Press 1 for a triangle, 2 for rectangle and 3 for a circle." << endl;
		switch (_getch())
		{
		case '1':
			cout<<"Enter base for triangle"<<endl;
			cin>>baseT;
			cout<<"Enter height for triangle"<<endl;
			cin>>heightT;
			cout<<"Enter color for triangle"<<endl;
			cin>>color;
			Array[i]=new triangle(baseT,heightT,color);
			//get base from user as input
			//get height from user as input
			//get color from user as input
			// create new triangle object and add to shapesArray[i]
			i++;
			break;
		case '2':
			cout<<"Enter length for rectangle"<<endl;
			cin>>baseT;
			cout<<"Enter width for rectangle"<<endl;
			cin>>heightT;
			cout<<"Enter color for rectangle"<<endl;
			cin>>color;
			Array[i]=new rectangle(baseT,heightT,color);
			//get length from user as input
			//get width from user as input
			//get color from user as input
			// create new rectangle object and add to shapesArray[i]
			i++;
			break;

		case '3':

			cout<<"Enter radius for circle"<<endl;
			cin>>baseT;
			cout<<"Enter color for circle"<<endl;
			cin>>color;
			Array[i]=new circle(baseT,color);
			//get radius from user as input
			// create new circle object and add to shapesArray[i]
			i++;
			break;

		default:
			cout<<"Invalid input. Enter again." <<endl<<endl;
			break;
		}

		//print area of all the shapes in shapeArray
		printarea(*Array);
		//delete all object you have create using new.          	
		delete [] Array;
		system("pause");
		return 0;
	}
}