// Joshua Boyce Hyland
// ID: C00270917
// Time started 10:25
// Time finished 10:37
// Date 24/01/22
//-----------------------------------
// Program wil find average of numbers in array
//-----------------------------------
// No known bugs

#include <iostream>
float findAverage(double t_array[]); 
const int MAX_SIZE = 5; 

int main()
{
	double array[MAX_SIZE]{ 3, 2, 7, 5, 4 }; 
	
	float average = findAverage(array);

	std::cout << "The average of the array is: " << average << std::endl; 

	return 1; 
}

float findAverage(double t_array[])
{
	float average = 0.0; 
	float sum = 0; 
	
	for (int index = 0; index < MAX_SIZE; index++)
	{

		sum = sum + t_array[index]; 
	}
	average = sum / MAX_SIZE; 
	return average;
}
