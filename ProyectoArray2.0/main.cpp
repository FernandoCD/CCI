#include<iostream>
#include "rectangle.h"
#include "triangle.h"

using namespace std;

int main () {
	
//	Rectangle *a, c(3, 8, 1, 5);
//	Triangle *b;
//	
//	a = &c;
//	a -> print();
//	
//	cout << endl;
//	
//	b = reinterpret_cast<Triangle *>(a);
//	b -> print();
	

	Rectangle *a = new Rectangle;
	Triangle *b = dynamic_cast<Triangle *>(a);
	
	if(b != NULL)
		cout << "Apunta a Triangle";
	else
		cout << "No apunta a Triangle";
	
	
	
	return 0;
}
