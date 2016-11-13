#include <iostream>
#include <stdexcept>
#include "Graph.h"
using namespace std;

void printv1(vector<int> x){
	cout << "[";
	for(unsigned i = 0; i < x.size(); ++i)
		if(i == x.size()-1)
			cout << x.at(i);
		else
			cout << x.at(i) << ", ";
	cout << "]";
}

Graph::Graph(const vector<int> &starts, const vector<int> &ends){
	if(starts.size()!= ends.size())
		throw invalid_argument("Los vectores son de diferente longitud");
	
	for(unsigned i = 0; i < starts.size(); i++){
		list_ady[starts[i]].push_back(ends[i]);
	}
}

int Graph::numOutgoing(const int nodeID) const{
	return adjacent(nodeID).size();
}

const vector<int> &Graph::adjacent(const int nodeID) const{
	map<int,vector<int> >::const_iterator i;
	i = list_ady.find(nodeID);
	return i -> second;
}

void Graph::print(){
	
	map<int,vector<int> >::iterator it;
	
	for (it = list_ady.begin(); it != list_ady. end(); ++it){
		cout << it -> first << " -> ";
		printv1(it -> second);
		cout << endl;
	}
}
