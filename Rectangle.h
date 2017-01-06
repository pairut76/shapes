#include <iostream>
using namespace std;
#include "Shape.h"
#include<cstdlib>

#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle : public Shape
{
public:
	Rectangle(int s1, int s2)
	{
		si1=s1;
		si2=s2;
	}
	double area()
	{
	return si1*si2;
	}
	void draw()
	{
	cout<<"\n";
	for(int i=0; i<si1; i++)
		{
		cout<<" *";
		for( int j=1; j<si2; j++)
			{
			cout<<" *";
			}
		cout<<"\n";
		}
	cout<<"\n";
	}
};


/*int main()
{
	Rectangle r1(2, 3);
	Rectangle r2(10, 48);
	cout<<r1.area()<<endl;
	cout<<r2.area()<<endl;
	r1.draw();
	r2.draw();
	return 0;
}
*/

#endif /* RECTANGLE_H */













