// Joshua Boyce Hyland
// ID: C00270917
// Time started 09:40
// Time finished 09:58
// Date: 19/01/22
//--------------------------
// Program will make user input a minus 
// -------------------------
// no known bugs

#include <iostream>

void makeNegative(int& t_num); 

int main()
{	
	int num = 0; 
	bool correctInput = false; // bool for error
	std::cout << "Please enter a number to be made a minus: "; 
	
	while (correctInput== false)// gives user opportunities to give correct inout
	
	{
		std::cin >> num; 

	
		if (num > 0)// if input is correct 
		{
			makeNegative(num);
			std::cout << " The number as a minus is: " << num << std::endl;
			correctInput = true; 
		}

		else // error message
		{
			std::cout << "number is already a minus or is 0, please enter another: "; 
		}

	}
	return 1; 
}

void makeNegative(int& t_num)// makes the number a minus 
{
	t_num = t_num * -1; 
}
