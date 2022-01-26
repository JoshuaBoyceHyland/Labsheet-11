// Joshua Boyce Hyland 
// ID: C00270917
// Time started 10:40
// Time finished 10:47
//  Date 24/01/22
// Time started 9:03
// Time finished 09:46
// 26/01/22
//------------------------------
//Program will reverse the order of the array
//------------------------------
// No known bugs

#include <iostream>
void reverseArray(double t_array[]); 
const int MAX_SIZE = 5; 

int main()
{
	double array[MAX_SIZE]{5.0,1.0, 2.0, 3.0, 6.0};
	reverseArray(array); 
	return 1; 
}

void reverseArray(double t_array[])
{
	double arrayCopy[MAX_SIZE];

	int reversePos = 0; // index for reversed array assigning 

	for (int index = MAX_SIZE - 1; index >= 0; index--)
	{
		arrayCopy[reversePos] = t_array[index]; //assgnsthe the array copy the reverse of the array passed as an arguement 
		std::cout << arrayCopy[reversePos] << std::endl;
		reversePos++;
	}
	
	
	for (int index = 0; index < MAX_SIZE; index++)// reverses the orginal array
	{
		t_array[index] = arrayCopy[index]; // changes contents of origanal array
	}
}
		

