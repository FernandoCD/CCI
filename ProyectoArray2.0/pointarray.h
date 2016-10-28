#ifndef POINTARRAY_H
#define POINTARRAY_H
#include "point.h"

class PointArray {
public:
	PointArray();
	PointArray(const Point ps[], const int size);
	PointArray(const PointArray &pv);
	~PointArray();
	
	void push_back(const Point &p);
    void insert(const int pos, const Point &p);
	void remove(const int pos);
	const int getSize() const;
	void clear();
	void printf();
	
private:
	int len;
	Point *p;
	
	void resize(int size);
};

#endif
