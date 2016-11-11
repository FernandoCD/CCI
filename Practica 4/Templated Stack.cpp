#include <iostream>
#include <vector>
using namespace std;

template<typename T> 
class Stack;

template<typename T>
Stack<T> operator+(const Stack<T> &a, const Stack<T> &b){
	Stack <T> c = a;
	for(unsigned  i = 0; i < b.n.size(); i++)
		c.n.push_back(b.n[i]);
	return c;
}

template<typename T>
class Stack{
private:
	vector<T> n;
	friend Stack<T> operator+<>(const Stack<T> &a, const Stack<T> &b);
public:
	bool empty(){return n.empty();}
	void push(const T &item){n.push_back(item);}
	T &top(){return n.back();}
	void pop(){n.pop_back();}
	void print(){
		for (unsigned i = 0; i < n.size() ; i++)
			cout << n.at(i) << " ";
	}
};

int main() {
	Stack<int> a, b;
	a.push(1);
	a.push(2);
	a.push(3);
	a.print();
	
	cout << endl;
	
	b.push(4);
	b.push(5);
	b.push(6);
	b.push(7);
	b.print();
	
	cout << endl;
	
	Stack<int> c = a + b;
	
	c.pop();
	c.print();
	
	cout << endl;
	
	cout << c.top();
	
	return 0;
}

