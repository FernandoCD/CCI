#include "polygon.h"
#include<iostream>
using namespace std;

int Polygon::num = 0;

Polygon::Polygon(const Point p1[], const int size) : p(p1, size){
	num++;
}

Polygon::Polygon(const PointArray &p1) : p(p1){
	num++;
}

Polygon::~Polygon(){
	num--;
}

int Polygon::getNumPolygons(){
	return num;
}

const int Polygon::getNumSides() const{
	return p.getSize();
}

const PointArray *Polygon::getPoints(){
	return &p;
}
