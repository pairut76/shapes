//Pairut Dumkuengthanant
//64856070

#include <iostream>
using namespace std;
//#include "Shape.h"
#include "Triangle.h"
#include "Square.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Picture.h"
int main() 
{
	/*Rectangle r1(2, 3);
	Rectangle r2(10, 48);
	cout<<r1.area()<<endl;
	cout<<r2.area()<<endl;
	r1.draw();
	r2.draw();

	Triangle t1(4,5);
	Triangle t2(3, 1);
	cout<<t1.area()<<endl;
	cout<<t2.area()<<endl;
	t1.draw();
	t2.draw();

	Circle c1(3);
	Circle c2(9);
	cout<<c1.area()<<endl;
	cout<<c2.area()<<endl;
	c1.draw();
	c2.draw();

	Square s1(2);
	Square s2(3);
	Square s4(23);
	cout<<s1.area()<<endl;
	cout<<s2.area()<<endl;
	cout<<s4.area()<<endl;
	s1.draw();
	s2.draw();
	s4.draw();*/
	
	/*Picture ps;
	ps.enter( new Triangle(4,3) );
	ps.enter( new Circle(2) );
	ps.enter( new Rectangle(4,5) );
	ps.enter( new Square(8) );
	ps.draw_all();
	cout<<"total: "<<ps.total_area()<<endl;
	*/

	Picture p;
	p.enter(new Triangle(5,5));
	p.enter(new Triangle(4,3));
	p.enter(new Circle(5));
	p.enter(new Circle(10));
	p.enter(new Square(5));
	p.enter(new Square(10));
	p.enter(new Rectangle(4,8));
	p.enter(new Rectangle(8,4));
	p.draw_all();
	cout<<"total: "<<p.total_area()<<endl;
	return 0;


}









