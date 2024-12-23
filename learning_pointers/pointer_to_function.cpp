#include <iostream>

int addition();

int main(){
	int result;
	int (*ptr)(); //initilize a pointer functino 
	ptr = &addition;  //storing the address of funtion addtion
	result = (*ptr)(); //calling the fucntion and storing the return value into result 
	std::cout << "The sun is :: " << result << std::endl;
	return 0;
}
int addition(){
	int a , b;
	std::cout << "Enter two numbers  :: ";
	std::cin >> a >> b;
	return a+b;
}
