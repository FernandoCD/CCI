#include "rectangle.h"
#include<iostream>
#include <cmath>
using namespace std;

Point cons[4];

Point *construct(const Point &p1, const Point &p2,
	const Point &p3, const Point &p4){
	cons[0] = p1;
	cons[1] = p2;
	cons[2] = p3;
	cons[3] = p4;
	return cons;
}

//SENTIDO AGUJAS DEL RELOJ:
//
//Los puntos: 1. Inf_Izq, 2. Sup_Izq, 3. Sup_Der, 4. Inf_Der 
//Los puntos: 1. Sup_Izq, 2. Sup_Der, 3. Inf_Der, 4. Inf_Izq 
//
//Los puntos: 1. Inf_Der, 2. Inf_Izq, 3. Sup_Izq, 4. Sup_Der 
//Los puntos: 1. Sup_Der, 2. Inf_Der, 3. Inf_Izq, 4. Sup_Izq 

Rectangle::Rectangle(const Point &p1, const Point &p2) 
	: Polygon(construct(p1, Point(p2.getx(), p1.gety()), 
	p2, Point(p1.getx(), p2.gety())), 4){
}

Rectangle::Rectangle(const int a, const int b, const int c, const int d) 
	: Polygon(construct(Point(a, b), Point(c,b), 
	Point(c, d), Point(a, d)), 4){
}

double Rectangle::area(){
	double a = abs(getPoints() -> get(0) -> getx() - 
	getPoints() -> get(1) -> getx());
	double l = abs(getPoints() -> get(0) -> gety() - 
	getPoints() -> get(3) -> gety());
	return a*l;
}

void Rectangle::print(){
	int i = 0;
	while(i <= 3){
		cout << "(" << getPoints() -> get(i) -> getx() << ",";
		cout << getPoints() -> get(i) -> gety() << ")";
		i++;
	}
}
