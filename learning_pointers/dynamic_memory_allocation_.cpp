#include <iostream>

//allocates blocks of memroy
//synatx for allocating memory using calloc function
// using calloc() the default values of the blocks willl be 0

int main(){
	//syntax for calloc
	// ptr = (datatype *) calloc (n , sizeof(int)); n specifies the number of blocks 
	
	int *ptr , n;
	std::cout << "Enter the number of elements to be added :: " ;
	std::cin >> n;
	ptr = (int *) calloc(n,sizeof(int));
	for ( int i = 0 ; i < n ; i++ ){
		std::cin >> *(ptr+i);
	}
	while (*ptr!='\0'){
		std::cout << *ptr << std::endl;
		ptr++;
	}
	return 0;
	free(ptr);
}

