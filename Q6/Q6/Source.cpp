// Joshua Boyce Hyland 
// ID: C00270917
// Time sarted 10:10
// Time finished 10:44
// Date: 26/01/22
// ----------------------
// Program will search through an array in a function and find the first instance of it
//-----------------------
// No known bugs

#include <iostream>
#include <string>

void initializeArrays (std::string t_nameArray[], int t_scoreArray[]); 
std::string findPlayerName(std::string t_aName, std::string t_nameArray[], int t_scoreArray[], int t_noOfPlayers);
const int MAX_PLAYERS = 10; 

int main()
{
	std::string playerNames[MAX_PLAYERS]; 
	int playerScores[MAX_PLAYERS]; 
	int noOfPlayers = 8; 
	std::string aName = ""; 

	initializeArrays(playerNames, playerScores); 
	
	std::cout << " Please enter a players name to search for: ";
	std::cin >> aName; 
	std::cout<<findPlayerName(aName, playerNames, playerScores, noOfPlayers)<<std::endl; 



}

void initializeArrays(std::string t_nameArray[], int t_scoreArray[])
{
	t_nameArray[0] = "David";
	t_nameArray[1] = "Jake"; 
	t_nameArray[2] = "Aoife";
	t_nameArray[3] = "Ki"; 
	t_nameArray[4] = "Joe"; 
	t_nameArray[5] = "Ray"; 
	t_nameArray[6] = "Dave"; 
	t_nameArray[7] = "Sue"; 

	t_scoreArray[0] = 75;
	t_scoreArray[1] = 65; 
	t_scoreArray[2] = 25; 
	t_scoreArray[3] = 35; 
	t_scoreArray[4] = 40; 
	t_scoreArray[5] = 80; 
	t_scoreArray[6] = 55; 
	t_scoreArray[7] = 65;

}

std::string findPlayerName(std::string t_aName, std::string t_nameArray[], int t_scoreArray[], int t_noOfPlayers)
{
	std::string playerStatus = "No player with thst name found"; 
	bool found = false; 
	int pos = 0; 

	for (int index = 0; index < MAX_PLAYERS; index++)
	{
		if (t_aName == t_nameArray[index])
		{
			pos = index; 
			found = true; 
			break; 
		}
	}

	if (found == true)
	{
		playerStatus = "Player: " + t_nameArray[pos] + "was found and has a score of: " +  std::to_string(t_scoreArray[pos]); 
	}
	
	return playerStatus;
}
