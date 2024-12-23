#include <iostream>

void my_strcp(char *str2 , char *str1 ){
	while (*str1 != '\0'){
		*str2 = *str1;
		str2++;
		str1++;
	}
}

int main(){
	char name[] = "Sansat Janish";
	char copyed_name[20];
	char *ptr = copyed_name;
	my_strcp(copyed_name,name);
	while (*ptr != '\0'){
		std::cout << *ptr ;
		ptr++;
	}
	return 0;
}
