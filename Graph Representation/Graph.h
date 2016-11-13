#ifndef GRAPH_H
#define GRAPH_H
#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Graph{
private:
	map<int, vector<int> > list_ady;
public:
	Graph(const vector<int> &starts, const vector<int> &ends);
	int numOutgoing(const int nodeID) const;
	const vector<int> &adjacent(const int nodeID) const;
	void print();
};

#endif
