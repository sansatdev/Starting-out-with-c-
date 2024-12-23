#include <iostream>

int my_Stringlen(char *ptr){
	int len = 0;
	while ( *ptr != '\0' ){
		len++;
		ptr++;
	}
	return len;
}
		
int main(){
	char str[] = "Hello world" , *ptr;
	int res = my_Stringlen(str);
	std::cout << "The length of String is :: " << res << std::endl;
	return 0;
}
