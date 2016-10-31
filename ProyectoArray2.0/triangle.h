#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "polygon.h"

class Triangle : public Polygon{
public:
	Triangle(const Point &p1, const Point &p2, const Point &p3);
	
	virtual double area();
	void print();
};

#endif
