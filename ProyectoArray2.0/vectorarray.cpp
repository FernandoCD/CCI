#include "vectorarray.h"
#include<iostream>
using namespace std;

VectorArray::VectorArray(){
	this -> len = 0;
	this -> v = new Vector[0];
}

VectorArray::VectorArray(const Vector v1[], const int size){
	len = size;
	v = new Vector[size];
	for(int i = 0; i < size; i++)
		v[i] = v1[i];
}

VectorArray::VectorArray(const VectorArray &v2){
	len = v2.len;
	v = new Vector[len];
	for(int i = 0; i < len; i++)
		v[i] = v2.v[i];
}

VectorArray::~VectorArray(){
	delete[] v;
}

void VectorArray::resize(int size){
	Vector *vs = new Vector[size];
	for(int i = 0; i < size; i++)
		vs[i] = v[i];
	delete[] v;
	len = size;
	v = vs;
}

void VectorArray::push_back(const Vector &v1){
	resize(len + 1);
	v[len - 1] = v1;
}

void VectorArray::insert(const int pos, const Vector &v1){
	resize(len + 1);
	for(int i = len-1; i > pos; i--)
		v[i] = v[i - 1];
	v[pos] = v1;
}

void VectorArray::remove(const int pos){
	for(int i = pos; i < len ; i++)
		v[i] = v[i+1];
	resize(len - 1);
}

const int VectorArray::getSize() const{
	return len;
}

void VectorArray::clear(){
	resize(0);
}

void VectorArray::printf(){
	int i;
	for(i = 0; i < len; i++)
		v[i].print();
}
