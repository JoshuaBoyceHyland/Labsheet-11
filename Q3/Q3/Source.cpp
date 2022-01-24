// Joshua Boyce Hyland 
// ID: C00270917
// Time started 10:06
// Time finished 10:42
// Date: 19/01/22
//----------------------------
// Program will search through the arrray and pick out the lowest number
//----------------------------
// No known bugs

#include <iostream>

int findLowest(const int t_arraySize,int t_array[]); 

int main()
{	
	const int ARRAY_SIZE = 5; 
	int lowest = 0; 
	int array[ARRAY_SIZE]={ 5, 3, 1, 4, 2};

	lowest =  findLowest(ARRAY_SIZE, array); 

	// result
	std::cout << "The lowest number in the array is: " <<lowest << std::endl; 
	return 1; 
}

int findLowest(const int t_arraySize, int t_array[])// finds lowest number in array
{
	int lowest = 0; 

	for (int index = 0; index < t_arraySize; index++)
	{
		; 

		if (index == 0)// assign for comparision
		{
			lowest = t_array[index]; 
		}
		
		if (lowest > t_array[index])// finds lowest
		{
			lowest = t_array[index];
		}
	}
	
return lowest; 
}
