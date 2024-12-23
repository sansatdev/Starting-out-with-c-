#include <iostream>

int main(){
	int a = 10 , *p = &a , **pp = &p;
	std::cout << "Value of a  :: "  << a << std::endl;
	std::cout << "Value of *p :: " << *p << std::endl;
	std::cout << "Value of **PP :: " << **pp << std::endl;
	return 0;
}
