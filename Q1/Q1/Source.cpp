// Joshua Boyce Hyland 
// ID: C002701917
// Time started 09:28
// Time finished 09:37
// Date: 19/01/22
//----------------------------
// Program will take in 2 numbers from user and triple them
//----------------------------
// No known bugs 

#include <iostream>

void triple_it(float & t_num1, float & t_num2); 
int main()
{
	float num1 = 0; 
	float num2 = 0; 
	
	// user input
	std::cout << " Please enter a number to be tripled: ";
	std::cin >> num1; 
	std::cout << " Please enter another number to be tripled: "; 
	std::cin >> num2; 

	triple_it(num1, num2);
	
	// Result 
	std::cout << "First number tripled: " << num1 << "   Second number tripled: " << num2 << std::endl; 


	return 1; 
}

void triple_it(float& t_num1, float& t_num2)// triples numbers enter by user 
{
	t_num1 = t_num1 * 3;// tripling first number
	t_num2 = t_num2 * 3;// triplinfg second number

}
