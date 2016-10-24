#include "vector.h"
#include<iostream>
using namespace std;

Vector::Vector(){
	start.modify(0.0, 0.0);
	start.modify(0.0, 0.0);
}

Vector::Vector(Point start1, Point end1){
	start = start1; end = end1;
}

Vector::Vector(Vector &o){
	start = o.start; end = o.end; 
}

void Vector::sets(Point start1){
	start = start1;
}

void Vector::sete(Point end1){
	end = end1; 
}

Point Vector::gets(){
	return start;
}

Point Vector::gete(){
	return end;
}

void Vector::print(){
	start.print(); 
	cout << " -> ";
	end.print();
	cout << endl;
}

void Vector::modify(Point start1, Point end1){
	start = start1;
	end = end1;
}
