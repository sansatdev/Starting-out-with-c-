#include <iostream>
//there are two ways for initilization of dynamic memory 
//malloc()
//calloc()
//and thre is a free() which used to free the dynaimclly allocated memory
//and one more function realloc() this is used to reallocate the memroy

int main(){
	//synax for dynamic allocation using malloc()
	
	// ptr = (datatype  * ) malloc(byte.size);
	int n;
	std::cout << "Enter the nth number :: " ; 
	std::cin >> n;
	int *p;
	p = (int *) malloc(n*sizeof(int));
	for ( int i = 0 ; i < n ; i++ ){
		std::cin >> *(p+i);
	}
	while (*p!= '\0'){
		std::cout << *p << std::endl;
		p++;
	}
	p=p-n;
	free(p);  // Syntax for free() to free the dynamically allocated memroy
	return 0;
}

