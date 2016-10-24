#include "pointarray.h"
#include<iostream>
using namespace std;

PointArray::PointArray(const Point p1[], const int size){
	int i;
	len = size;
	p = new Point[size];
	for(i = 0; i < size; i++)
		p[i] = p1[i];
}

PointArray::PointArray(const PointArray &pv){
	int i;
	len = pv.len;
	p = new Point[len];
	for(i = 0; i < len; i++)
		p[i] = pv.p[i];
}

void PointArray::push_back(const Point &p1){
	Point *ps = new Point[len + 1];
	int s = len + 1, i;
	for(i = 0; i < s; i++)
		ps[i] = p[i];
	delete[] p;
	len = s;
	p = ps;
	
	p[len - 1] = p1;
}

void PointArray::insert(const int pos, const Point &p1){
	Point *ps = new Point[len + 1];
	int s = len + 1, i;
	for(i = 0; i < s; i++)
		ps[i] = p[i];
	delete[] p;
	len = s;
	p = ps;
	
	for(i = len; i > pos; i--)
		p[i] = p[i - 1];
	p[pos] = p1;
}

void PointArray::remove(const int pos){
	Point *ps = new Point[len - 1];
	int s = len - 1, i;
	for(i = pos; i < len ; i++)
		p[i] = p[i+1];
		
	for(i = 0; i < s; i++)
		ps[i] = p[i];
	delete[] p;
	len = s;
	p = ps;
}

const int PointArray::getSize() const{
	return len;
}

void PointArray::clear(){
	Point *ps = new Point[0];
	delete[] p;
	len = 0;
	p = ps;
}

void PointArray::printf(){
	int i;
	for(i = 0; i < len; i++)
		p[i].print();
}
