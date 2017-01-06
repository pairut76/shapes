//Pairut Dumkuengthanant
//64856070

#include <iostream>
using namespace std;
#include "Shape.h"

#ifndef CIRCLE_H
#define CIRCLE_H
class Circle : public Shape
{
public:
	Circle(int r){
	si1=r;
	}

	double area(){
	const double pi=3.14159265;
	return pi*si1*si1;
	}
	
	void draw(){
	cout<<"\n";
	cout<<"		* *		\n";
	cout<<"	       * * *		\n";
	cout<<"	     * * * * *		\n";
	//cout<<"     * * * * * * 	\n";
	cout<<"	     * * * * *		\n";
	cout<<"	       * * *		\n";
	cout<<"		* *		\n";
	cout<<"\n";
	}
};
/*
int main()
{
	Circle c1(3);
	Circle c2(9);
	cout<<c1.area()<<endl;
	cout<<c2.area()<<endl;
	c1.draw();
	c2.draw();
	return 0;
}
*/

#endif /* CIRCLE_H */

