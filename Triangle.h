//Pairut Dumkuengthanant
//64856070

#include <iostream>
using namespace std;
#include "Shape.h"
#include<cstdlib>

#ifndef TRIANGLE_H
#define TRIANGLE_H
class Triangle : public Shape
{
public:
	Triangle(int height, int base)
	{
		si1=height, si2=base;
	}
	double area()
	{
		double a=0.0;
		//cout<<si1<<"	"<<si2<<endl;
		//cout<<"triangle: "<<(si2*si1)/2<<endl;
		a=((si2*si1)*.5);
		return a;
	}
	void draw()
	{
	cout<<"\n";
	for(int i=0; i<si1; i++)
		{	
		//cout<<i<<endl;
		
		for(int j=i; j>=si1-si2;j--)
			{
			
			//cout<<j;
			cout<<" *";
			}
		cout<<"\n";
		}
	cout<<"\n";
	}
};
/*	
int main()
{
	Triangle t1(4,5);
	Triangle t2(3, 1);
	cout<<t1.area()<<endl;
	cout<<t2.area()<<endl;
	t1.draw();
	//t2.draw();
	return 0;
}


*/

#endif /* TRIANGLE_H */








