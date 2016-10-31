#include <iostream>
using namespace std;

const string vowels = "aeiou";
string pigLatinify(string s);

int main(){
	
	string a = "outlast";
	cout << pigLatinify(a);
	
	return 0;
}

string pigLatinify(string a){
	if(a.find("qu") == 0)
		return a.substr(2, a.size()-2) + a.substr(0, 2) + "ay";
	else{
		unsigned i = 0;
		while(i < vowels.size()){
			if(a[0] == vowels[i])
				return a + "way";
			i++;
		}
	}
	return a.substr(1, a.size()-1) + a.substr(0, 1) + "ay";
}
