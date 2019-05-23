
// this program prompts the user to enter a sentence and capatalizes it's each character after 
// the space. 

// example of input. 
//**********************
// My name is something and i live in america.

// example of output
//**********************
// My Name is Something And I Live In America. 

// including necessary header files. 
#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
	string inputString; // variable to hold the input given by the user. 
	string remainingString; // the part of the sentence yet to be examined. 
	int location;// keeps track of the empty space " "

	// prompt instruction to user to enter a sentence
	cout << "Please enter a sentence:" << endl; 
	getline(cin, inputString); 

	// find the location of the first blank spot in the sentence 
	location = inputString.find(" "); 

	// run while loop until program finds last blank " " space. 
	while (location != string::npos)
	{
		inputString[0] = toupper(inputString[0]); // this always converts very first character to capital letter. 
		inputString[location + 1] = toupper(inputString[location + 1]); 
		location = inputString.find(" ", location + 1); 
	}
	cout << endl; // create extra space. 
	cout << "Updated sentence: " << inputString << endl; 

	return 0; 
}