#include<iostream>
#include "point.h"
#include "vector.h"
#include "pointarray.h"
#include "vectorarray.h"

using namespace std;

int main () {
	
	Point q(3.0, 2.0); 
	Point q2(2.0, 4.0);
	Point r(4.0, 5.0); 
	Point r2(3.0, 6.0);
	Point r3(1.0, 1.0);
	
	Vector x(q, q2);
	Vector x1(r, r2);
	Vector y(q, r3);
	Vector y2(r3, q2);
	
	Point p[5] = {q, q2, r, r2, r3};
	Vector pv[3] = {x, x1, y};
	
	PointArray a(p,5);
	VectorArray b(pv, 3);
	
//	a.push_back(r3);
//	a.insert(4, q);
//	a.remove(1);
//	cout << a.getSize() << endl;
/*	a.printf();*/
	
	cout << endl;
	
//	b.push_back(y2);
//	b.insert(2, x);
//	b.remove(2);
//	cout << b.getSize() << endl;
//	b.printf();

	
	return 0;
}
