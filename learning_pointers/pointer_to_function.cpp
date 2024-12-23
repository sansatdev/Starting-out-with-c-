#include <iostream>

int addition();

int main(){
	int result;
	int (*ptr)();
	ptr = &addition;
	result = (*ptr)();
	std::cout << "The sun is :: " << result << std::endl;
	return 0;
}
int addition(){
	int a , b;
	std::cout << "Enter two numbers  :: ";
	std::cin >> a >> b;
	return a+b;
}
