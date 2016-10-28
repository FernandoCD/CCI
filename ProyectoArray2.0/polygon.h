#ifndef POLYGON_H
#define POLYGON_H
#include "pointarray.h"

class Polygon{
protected:
	PointArray p;
	static int num;
	
public:
	Polygon(const Point p1[], const int size);
	
	virtual double area();
	static int getNumPolygons();
	int getNumSides();
//	getPoints(); Devuelve un puntero no se puede modificar a la 
//	PointArray del Polígono.
};

#endif
