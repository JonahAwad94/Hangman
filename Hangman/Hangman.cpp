// See "README.md"

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

void printMan(int errors);
string generateWord(int wordListLength);
int getInput(int lowerLimit, int upperLimit);


int main()
{
	cout 
		<< "#######################\n"
		<< "# Welcome to Hangman! #\n"
		<< "# ------------------- #\n"
		<< "# Select Difficulty:  #\n"
		<< "# 1. Easy             #\n"
		<< "# 2. Hard             #\n"
		<< "#######################" << endl;
	int userChoice = getInput(1, 2);

	//set error multiplier based on difficulty
	int multiplier;
	if (userChoice == 1) // easy
	{
		multiplier = 1;
	}
	else // hard
	{
		multiplier = 2; 
	}

	// Generate word
	int wordListLength = 500;
	string word = generateWord(wordListLength);

	//test generated word
	cout << word;

	return 0;
}

// Prints current state of man depending on how many errors were made while guessing letters
void printMan(int errors)
{
	switch (errors)
	{
	case 0:
		system("CLS");
		cout <<
			" ______\n" <<
			"      |\n" <<
			"      |\n" <<
			"      |\n" <<
			"      |\n" <<
			"      |\n" <<
			"      |\n" <<
			"     ---" << endl;
		break;
	case 1:
		system("CLS");
		cout <<
			" ______\n" <<
			" |    |\n" <<
			"      |\n" <<
			"      |\n" <<
			"      |\n" <<
			"      |\n" <<
			"      |\n" <<
			"     ---" << endl;
		break;
	case 2:
		system("CLS");
		cout <<
			" ______\n" <<
			" |    |\n" <<
			" O    |\n" <<
			"      |\n" <<
			"      |\n" <<
			"      |\n" <<
			"      |\n" <<
			"     ---"  << endl;
		break;
	case 3:
		system("CLS");
		cout <<
			" ______\n" <<
			" |    |\n" <<
			" O    |\n" <<
			" |    |\n" <<
			"      |\n" <<
			"      |\n" <<
			"      |\n" <<
			"     ---"  << endl;
		break;
	case 4:
		system("CLS");
		cout <<
			" ______\n" <<
			" |    |\n" <<
			" O    |\n" <<
			"/|    |\n" <<
			"      |\n" <<
			"      |\n" <<
			"      |\n" <<
			"     ---"  << endl;
		break;
	case 5:
		system("CLS");
		cout <<
			" ______\n" <<
			" |    |\n" <<
			" O    |\n" <<
			"/|\\   |\n" <<
			"      |\n" <<
			"      |\n" <<
			"      |\n" <<
			"     ---" << endl;
		break;
	case 6:
		// Two backward slashes required to overide escape character "\"
		system("CLS");
		cout <<
			" ______\n" <<
			" |    |\n" <<
			" O    |\n" <<
			"/|\\   |\n" <<
			" |    |\n" <<
			"      |\n" <<
			"      |\n" <<
			"     ---" << endl;
		break;
	case 7:
		system("CLS");
		cout <<
			" ______\n" <<
			" |    |\n" <<
			" O    |\n" <<
			"/|\\   |\n" <<
			" |    |\n" <<
			"/     |\n" <<
			"      |\n" <<
			"     ---" << endl;
		break;
	case 8:
		system("CLS");
		cout <<
			" ______\n" <<
			" |    |\n" <<
			" O    |\n" <<
			"/|\\   |\n" <<
			" |    |\n" <<
			"/ \\   |\n" <<
			"      |\n" <<
			"     ---" << endl;
		break;
	}
}

// Get user input and make sure it is valid
int getInput(int lowerLimit, int upperLimit)
{
	int userInput;
	cin >> userInput;

	//Check if user input is valid
	if (userInput < lowerLimit || userInput > upperLimit)
	{
		do
		{
			cout << "That is not a valid choice. Please a number between " << lowerLimit << " and " << upperLimit << "." << endl;
			cin >> userInput;
		} while (userInput < lowerLimit || userInput > upperLimit);
	}

	return userInput;
}



string generateWord(int wordListLength)
{
	string word;
	ifstream wordList("wordList.txt");

	//generate random number to pull get to word on random line of wordList file
	srand(time(0));
	int line = (rand() % wordListLength + 1);


	if (wordList.is_open())
	{
		for (int i = 1; i <= line; i++) //loop to line with desired word
		{
			wordList >> word;
			if (i == line) // Target line reached, extract word, exit loop
			{
				exit;
			}
		}
	}
	else
	{
		cout << "Could not access Word List. " << endl;
	}

	wordList.close();

	return word;
}