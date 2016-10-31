#include "triangle.h"
#include <iostream>
#include <cmath>
using namespace std;

Point cons2[3];

Point *construct2(const Point &p1, const Point &p2, const Point &p3){
	cons2[0] = p1;
	cons2[1] = p2;
	cons2[2] = p3;
	return cons2;
}

Triangle::Triangle(const Point &p1, const Point &p2, const Point &p3) : 
	Polygon(construct2(p1, p2, p3), 3){
}

double Triangle::area(){
	double a, b, c, s;
	a = sqrt(pow(p.get(0) -> getx() - p.get(1)-> getx(), 2) + 
			 pow(p.get(0) -> gety() - p.get(1)-> gety(),2));
	
	b = sqrt(pow(p.get(1) -> getx() - p.get(2)-> getx(), 2) + 
			 pow(p.get(1) -> gety() - p.get(2)-> gety(),2));
	
	c = sqrt(pow(p.get(2) -> getx() - p.get(0)-> getx(), 2) + 
			 pow(p.get(2) -> gety() - p.get(0)-> gety(),2));
	
	s = (a + b + c)/2;
	
	return sqrt(s*(s - a)*(s - b)*(s - c));
}

void Triangle::print(){
	int i = 0;
	while(i <= 2){
		cout << "(" << getPoints() -> get(i) -> getx() << ",";
		cout << getPoints() -> get(i) -> gety() << ")";
		i++;
	}
}
