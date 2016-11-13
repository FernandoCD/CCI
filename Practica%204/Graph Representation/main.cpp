#include<iostream>
#include "Graph.h"
using namespace std;

void printv(vector<int> x);

int main(){
	
	vector<int> a;
	vector<int> b;
	
	a.push_back(3);
	a.push_back(4);
	a.push_back(3);
	a.push_back(1);
/*	a.push_back(5);*/

	
	b.push_back(2);
	b.push_back(9);
	b.push_back(5);
	b.push_back(7);
	
	Graph g(a, b);
	
	g.print();
	
	cout << g.numOutgoing(3) << endl;
	
	printv(g.adjacent(3));

	return 0;
}

void printv(vector<int> x){
	for(unsigned i = 0; i < x.size(); i++)
		cout << x.at(i) << " ";
}
