// See "README.md"

#include "pch.h"
#include <iostream>

using namespace std;

void printMan(int errors);

int main()
{
	int num;
	cin >> num;

	printMan(num);

	return main();
}

// Prints current state of man depending on how many errors were made while guessing letters
void printMan(int errors)
{
	switch (errors)
	{
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