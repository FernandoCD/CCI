#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void space(int x);

int main() {
	
	
	vector<int>::iterator i, i_3;
	vector<int>::reverse_iterator i2;
	
/*	VECTOR NUMERO 1*/
	
	vector<int> vector1;
	
	for (int i = 1; i <= 9; i++)
		vector1.push_back(i);
	
	vector1.pop_back();
	
	for (i = vector1.begin(); i != vector1.end() ; i++)
		cout << *i << " ";
	space(2);
	cout << "Su tamaño es de: " << vector1.size() << endl;
	cout << "Su capacidad es de: " << vector1.capacity();
	space(2);
	
/*	VECTOR NUMERO 2*/
	
	vector<int> vector2;
	
	i_3 = vector2.begin();
	vector2.insert(i_3, 3, 5);
	
	for (int i = 6; i > 3; i--)
		vector2.push_back(i);
	
	vector2.resize(9,1);
	
	for (i2 = vector2.rbegin(); i2 != vector2.rend() ; i2++)
		cout << *i2 << " ";
	space(2);
	cout << "Su tamaño es de: " << vector2.size();
	space(2);
	
/*	VECTOR NUMERO 3*/
	
	vector<int> vector3(10,3);
	
/*	vector3.assign(4,2);*/
	
/*	vector3.swap(vector2);*/
	
/*	vector3.clear();*/
	
	for (unsigned i = 0; i < vector3.size() ; i++)
		cout << vector3.at(i) << " ";
	space(2);

	cout << "El primer numero es: " << vector3.front() << endl;
	cout << "El ultimo numero es: " << vector3.back() << endl;
	cout << "Su capacida maxima es de: " << vector3.max_size() << endl;
	
	return 0;
}

void space(int x){
	for(int i = 0; i < x; i++)
		cout << endl;
}

