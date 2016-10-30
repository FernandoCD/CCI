#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

void space(int x);

int main() {
	
	queue<int> cola1;
	for(int i = 0; i <= 14; i+=2)
		cola1.push(i);
	
	cola1.pop();
	
	cout << "El primero es: " << cola1.front();
	space(2);
	cout << "El ultimo es: " << cola1.back();
	space(2);
	cout << "Su tamaño es de: " << cola1.size();
	space(2);
	
	while (cola1.empty() != true) {
		cout << cola1.front() << " ";
		cola1.pop();
	}
	
	return 0;
}

void space(int x){
	for(int i = 0; i < x; i++)
		cout << endl;
}
