#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

void space(int x);

int main() {
	
	stack<int> stack1;
	for(int i = 0; i <= 8; i++)
		stack1.push(i);
	
	cout << "Su tamaño es de: " << stack1.size();
	space(2);

	while (stack1.empty() != true) {
		cout << stack1.top() << " ";
		stack1.pop();
	}
	return 0;
}

void space(int x){
	for(int i = 0; i < x; i++)
		cout << endl;
}
