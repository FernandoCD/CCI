#ifndef VECTOR_H
#define VECTOR_H
#include "point.h"

class Vector {
public:
	Vector();
	Vector(Point start1, Point end1);
	Vector(Vector &o);
	
	void sets(Point start1);
	void sete(Point end1);
	Point gets();
	Point gete();
	void print();
	void modify(Point start1, Point end1);

private:
	Point start, end;
};

#endif
