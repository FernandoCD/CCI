#include <iostream>

/*#define min(a, b)(a > b ? b : a)*/

template<typename T>
T min(const T a, const T b){
	if(a > b)
		return b;
	return a;
}

int main() {
	
	std::cout<< min<int>(5, 6) << std::endl;
	std::cout<< min<float>(1.2, 0.6)<< std::endl;
	
	/*std::cout << min(5.2, 2.1);*/
	
	return 0;
}

