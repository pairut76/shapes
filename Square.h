//Pairut Dumkuengthanant
//64856070


#include <iostream>
using namespace std;
#include "Shape.h"
#include<cstdlib>


#ifndef SQUARE_H
#define SQUARE_H
class Square : public Shape
{
public:
	Square(int s1)
	{
		si1=s1;
	}
	double area()
	{ 
	//cout<<si1*si1<<endl;
	return si1*si1; 
	}
	void draw()
	{
	cout<<"\n";
	for(int i=0; i<si1; i++)
		{
		cout<<" *";
		for(int j=1; j<si1; j++)
			{
			cout<<" *";
			//cout<<"\n";
			}
		cout<<"\n";
		}
	cout<<"\n";
	}
};
/*
int main()
{
	Square s1(2);
	Square s2(3);
	Square s4(23);

	cout<<s1.area()<<endl;
	cout<<s2.area()<<endl;
	cout<<s4.area()<<endl;
	s1.draw();
	s2.draw();
	s4.draw();
	return 0;
}
*/
#endif /* SQUARE_H */












