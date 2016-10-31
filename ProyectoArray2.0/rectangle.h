#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "polygon.h"

class Rectangle : public Polygon{
public:
	Rectangle(const Point &p1, const Point &p2);
	Rectangle(const int a, const int b, const int c, const int d);
	
	virtual double area();
	void print();
};

#endif
