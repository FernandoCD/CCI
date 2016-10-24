#include "point.h"
#include<iostream>
using namespace std;

Point::Point(){
	x = 0.0; y = 0.0;
}

Point::Point(double x1, double y1){
	x = x1; y = y1;
}

Point::Point(Point &o){
	x = o.x; y = o.y; 
}

void Point::setx(double x1){
	x = x1;
}

void Point::sety(double y1){
	y = y1;
}

double Point::getx(){
	return x;
}

double Point::gety(){
	return y;
}

void Point::print(){
	cout << "(" << x << "," << y << ")";
}

void Point::modify(double x1, double y1){
	x = x1; y = y1;
}
