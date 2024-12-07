#include <iostream>
/*The East Coast sales division of a company generates 58 percent of total sales. Based
on that percentage, write a program that will predict how much the East Coast division
will generate if the company has $8.6 million in sales this year.*/
int main(){
	 double total_sales = 86e6 * 0.58;
	std::cout << "The East Coast division will generate $" << total_sales << std::endl;
	return 0;
}
