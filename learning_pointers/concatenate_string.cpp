#include <iostream>

void my_Strcat(char *str1 , char *str2 ){
	while (*str1 !='\0' ){
		str1++;
	}
	while ( *str2 != '\0' ){
		*str1++ = *str2++;
	}
}
int main(){
	char s1[50] = "Hello ";
	char s2[] = "World";
	char *ptr = s1;
	my_Strcat(s1,s2);
	while(*ptr != '\0'){
		std::cout << *ptr;
		ptr++;
	}
	return 0;
}
