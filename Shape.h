//Pairut Dumkuengthanant
//64856070



#include <iostream>
#include <cmath>
using namespace std;
#ifndef SHAPE_H
#define SHAPE_H
class Shape
{
protected:
	int si1,si2,si3;
public:
Shape(int s1, int s2, int s3){
	 si1=s1;
	 si2=s2;
	 si3=s3;
	}
Shape(){ si1=0, si2=0, si3=0;}

	virtual double area()=0;
	virtual void draw()=0;
	virtual ~Shape(){}
};
	
	
#endif /* SHAPE_H */

































