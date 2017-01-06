//Pairut Dumkuengthanant
//64856070

#include <iostream>
using namespace std;
#include "Shape.h"
#include "Triangle.h"
#include "Square.h"
#include "Rectangle.h"
#include "Circle.h"

#ifndef PICTURE_H
#define PICTURE_H

typedef class ShapeLLP * ShapeLL;
class ShapeLLP
{
public:
	Shape * info;
	ShapeLL next;
	ShapeLLP( Shape * nInfo, ShapeLL nNext ): info(nInfo), next(nNext){}
};

class Picture
{
	ShapeLL head;
public:
	Picture() : head(0){}
	
	void enter(Shape *s)
	{
		head=new ShapeLLP(s, head);
	}
	double total_area()
	{
		double Total = 0.0;
		for(ShapeLL p=head; p != 0; p=p->next)
		{	
			
			cout<<p->info->area()<<endl;
			Total+=p->info->area();
		}
		return Total;
	}
	void draw_all()
	{
		for(ShapeLL p=head; p != 0; p=p->next)
		{
			p->info->draw();
		}
	}
};
#endif /* PICTURE_H */














