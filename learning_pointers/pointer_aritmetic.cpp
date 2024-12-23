#include <iostream>

int main(){
	int x = 50 , *ptr;
	ptr = &x;
	std::cout << "Address of x is :: " << ptr << std::endl;
	std::cout << "Value at address  " << ptr << " is " << *ptr << std::endl;
	ptr=ptr + 1; // ptr is getting incremented by sizeof interger i.e 4tbyte
	std::cout << "Value at address  " << ptr << " is " << *ptr << std::endl;
	ptr = ptr-2;
	std::cout << "Value at address  " << ptr << " is " << *ptr << std::endl;
	return 0;
}
