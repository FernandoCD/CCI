#ifndef VECTORARRAY_H
#define VECTORARRAY_H
#include "vector.h"

class VectorArray {
public:
	VectorArray();
	VectorArray(const Vector vs[], const int size);
	VectorArray(const VectorArray &v2);
	~VectorArray();
	
	void push_back(const Vector &v1);
	void insert(const int pos, const Vector &v1);
	void remove(const int pos);
	const int getSize() const;
	void clear();
	void printf();
	
private:
	int len;
	Vector *v;
	
	void resize(int size);
};

#endif
