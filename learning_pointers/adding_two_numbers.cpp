#include <iostream>

void sum(int *ptr1 , int *ptr2){
	int res ;
	res = *ptr1 + *ptr2;
	std::cout << "Result after adding is :: " << res << std::endl;
}
int main(){
	int a , b;
	std::cout << "Enter two numbers :: "  ;
	std::cin >> a >> b;
	sum(&a,&b);
	return 0;
}
