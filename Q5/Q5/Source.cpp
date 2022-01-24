// Joshua Boyce Hyland 
// ID: C00270917
// Time started 10:40
// Time finished 10:47
// Date 24/01/22
//------------------------------
//Program will reverse the order of the array
//------------------------------
//bugs

#include <iostream>
void reverseArray(double t_array[]); 
const int MAX_SIZE = 5; 

int main()
{
	double array[MAX_SIZE]{ 3.0, 6.0, 2.0 ,1.0, 5.0 }; 
	reverseArray(array); 
	return 1; 
}

void reverseArray(double t_array[])
{
	double reversePos = 0; 

	for (int index = MAX_SIZE - 1; index >= 0; index--)
	{
		std::cout << t_array[index] << std::endl; 
		t_array[reversePos] = t_array[index]; // assigns the to be reverse permentaly rather than just being displayed in revrse
		reversePos++; 
	}
}
