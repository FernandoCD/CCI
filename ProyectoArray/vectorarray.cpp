#include "vectorarray.h"
#include<iostream>
using namespace std;

VectorArray::VectorArray(const Vector v1[], const int size){
	len = size;
	v = new Vector[size];
	int i;
	for(i = 0; i < size; i++)
		v[i] = v1[i];
}

VectorArray::VectorArray(const VectorArray &v2){
	len = v2.len;
	v = new Vector[len];
	int i;
	for(i = 0; i < len; i++)
		v[i] = v2.v[i];
}

void VectorArray::push_back(const Vector &v1){
	Vector *vs = new Vector[len + 1];
	int s = len + 1, i;
	for(i = 0; i < s; i++)
		vs[i] = v[i];
	delete[] v;
	len = s;
	v = vs;
		
	v[len - 1] = v1;
}

void VectorArray::insert(const int pos, const Vector &v1){
	Vector *vs = new Vector[len + 1];
	int s = len + 1, i;
	for(i = 0; i < s; i++)
		vs[i] = v[i];
	delete[] v;
	len = s;
	v = vs;
	
	for(i = len; i > pos; i--)
		v[i] = v[i - 1];
	v[pos] = v1;
}

void VectorArray::remove(const int pos){
	Vector *vs = new Vector[len - 1];
	int s = len - 1, i;
	for(i = pos; i < len ; i++)
		v[i] = v[i+1];
	for(i = 0; i < s; i++)
		vs[i] = v[i];
	delete[] v;
	len = s;
	v = vs;
}

const int VectorArray::getSize() const{
	return len;
}

void VectorArray::clear(){
	Vector *vs = new Vector[0];
	delete[] v;
	len = 0;
	v = vs;
}

void VectorArray::printf(){
	int i;
	for(i = 0; i < len; i++)
		v[i].print();
}
