#include <iostream>

int main(){
	int a = 10 , b  = 20 , *p1 = &a , *p2 = &b;
	std::cout << "Before Swap Value of  a is : " << a << " and b is : " << b << std::endl;
	*p1 = *p1 + *p2;
	*p2 = *p1 - *p2;
	*p1 = *p1  - *p2;
	std::cout << "After  Swap Value of  a is : " << a << " and b is : " << b << std::endl;
	return 0;
}
