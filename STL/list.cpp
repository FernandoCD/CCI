#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

void space(int x);
	
int main() {
	
	list<int>::iterator i, i_3, i4, i_5;
	list<int>::reverse_iterator i2;
	
/*	LISTA NUMERO 1*/
	
	list<int> list1;
	
	for (int i = 4; i <= 7; i++)
		list1.push_back(i);
	
	for (int i = 3; i >= 0; i--)
		list1.push_front(i);
	
	list1.pop_back();
	
	list1.resize(10, 5);
	
	
	for (i = list1.begin(); i != list1.end() ; i++)
		cout << *i << " ";
	space(2);
	cout << "Su tamaño es de: " << list1.size();
	space(2);
	
/*	LISTA NUMERO 2*/
	
	list<int> list2(3,9);
	
	i_3 = list2.begin();
	for(int i = 0; i <= 5; i++)
		list2.insert(i_3, i);
	
	list2.pop_front();
	
	list2.remove(5);

	list2.resize(9);
	
//	list2.sort();
//	list2.swap(list1);

	for (i2 = list2.rbegin(); i2 != list2.rend() ; i2++)
		cout << *i2 << " ";
	space(2);
	cout << "Su tamaño es de: " << list2.size();
	space(2);
	
/*	LISTA NUMERO 3*/
	
	list<int> list3;
	
	list3.assign(list1.begin(), list1.end());
	
	list3.reverse();
	
	i_5 = list3.begin();
	advance(i_5, 5);
	i_5 = list2.erase(i_5);
	
	for (i4 = list3.begin(); i4 != list3.end() ; i4++)
		cout << *i4 << " ";
	space(2);
	cout << "Su tamaño es de: " << list3.size();
	space(2);
	
	cout << "El primero es: " << list3.front() << endl;
	cout << "El ultimo es: " << list3.back() << endl;
	cout << "Tiene una capcidad maxima de: " << list3.max_size() << endl;
	
	return 0;
}

void space(int x){
	for(int i = 0; i < x; i++)
		cout << endl;
}

