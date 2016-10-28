#ifndef POINT_H
#define POINT_H

class Point {
public:
	Point();
	Point(double x1, double y1);
	Point(Point &o);
	
	void setx(double x1);
	void sety(double y1);
	double getx();
	double gety();
	void print();
	void modify(double x1, double y1);

private:
	double x, y;
};

#endif
