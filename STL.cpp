#include <iostream>
#include <list>
#include <queue>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
	list<int> mylist;
	mylist.push_back(3);
	mylist.push_back(4);
	mylist.push_front(2);
	mylist.push_front(1);
	
	list<int>::iterator it;
	for (it = mylist.begin(); it != mylist.end() ; it++)
		cout << " " << *it;
	cout << endl;


	queue<int> myqueue;
	myqueue.push(2);
	myqueue.push(4);
	myqueue.push(5);
	myqueue.push(6);
	
	while (!myqueue.empty()) {
		cout << " " << myqueue.front();
		myqueue.pop();
	}
	cout << endl;
	
	
	stack<int> mystack;
	mystack.push(7);
	mystack.push(6);
	mystack.push(5);
	mystack.push(3);
	
	while (!mystack.empty()) {
		cout << " " << mystack.top();
		mystack.pop();
	}
	cout << endl;
	
	
	vector<int> myvector;
	myvector.push_back(4);
	myvector.push_back(6);
	myvector.push_back(7);
	myvector.push_back(8);
	
	vector<int>::iterator it4;
	for (it4 = myvector.begin(); it4 != myvector.end() ; it4++)
		cout << " " << *it4;
	cout << endl;
	
	return 0;
}

