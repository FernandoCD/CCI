#ifndef POLYGON_H
#define POLYGON_H
#include "pointarray.h"

class Polygon{
protected:
	PointArray p;
	static int num;
	
public:
	Polygon(const Point p1[], const int size);
	Polygon(const PointArray &p1);
	~Polygon();
	
	virtual double area() = 0;
	static int getNumPolygons();
	const int getNumSides() const ;				
	const PointArray *getPoints();
};

#endif
