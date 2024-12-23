#include <iostream>

int main(){
	char str[] = "Hello";
	char *ptr;
	ptr = str; // this can be also written as ptr = &str || ptr = str[0] || ptr = &str[0]
	while (*ptr != '\0' ){
		std::cout << *ptr;
		ptr++;
	}
	return 0;
}
