#include "pointarray.h"
#include<iostream>
using namespace std;

PointArray::PointArray(){
	this -> len = 0;
	this -> p = new Point[0];
}

PointArray::PointArray(const Point p1[], const int size){
	len = size;
	p = new Point[len];
	for(int i = 0; i < size; i++)
		p[i] = p1[i];
}

PointArray::PointArray(const PointArray &pv){
	len = pv.len;
	p = new Point[len];
	for(int i = 0; i < len; i++)
		p[i] = pv.p[i];
}

PointArray::~PointArray(){
	delete[] p;
}

void PointArray::resize(int size){
	Point *ps = new Point[size];
	for(int i = 0; i < size; i++)
		ps[i] = p[i];
	delete[] p;
	len = size;
	p = ps;
}

void PointArray::push_back(const Point &p1){
	resize(len + 1);
	p[len - 1] = p1;
}

void PointArray::insert(const int pos, const Point &p1){
	resize(len + 1);
	for(int i = len-1; i > pos; i--)
		p[i] = p[i - 1];
	p[pos] = p1;
}

void PointArray::remove(const int pos){
	for(int i = pos; i < len-1 ; i++)
		p[i] = p[i+1];
	resize(len - 1);
}

const int PointArray::getSize() const{
	return len;
}

void PointArray::clear(){
	resize(0);
}

Point *PointArray::get(const int pos){
	if (pos < len)
		return p + pos;
	return NULL;
}

const Point *PointArray::get(const int pos) const{
	if (pos < len)
		return p + pos;
	return NULL;
}

void PointArray::printf(){
	int i;
	for(i = 0; i < len; i++)
		p[i].print();
}
