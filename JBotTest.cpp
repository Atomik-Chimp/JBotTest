// JBotTest.cpp : Defines the entry point for the console application.
//
// Program Name: chatterbot1
// Description: this is a very basic example of a chatterbot program
//
// Author: Gonzales Cenelia
//


#include "stdafx.h"

#include <iostream>
#include <string>
#include <ctime>

int _tmain(int argc, _TCHAR* argv[])
{
	std::string Response[] = {
		"I HEARD YOU!",
		"SO, YOU ARE TALKING TO ME.",
		"CONTINUE, I'M LISTENING.",
		"VERY INTERESTING CONVERSATION.",
		"TELL ME MORE..."
	};

	srand((unsigned) time(NULL));

	std::string sInput = "";	// the query string
	std::string sResponse = "";	// the response string
	std::string sEnd = "END\n";	// the string to make it end

	while(1) {
		std::cout << ">";						// print a prompt
		std::getline(std::cin, sInput);			// get the query string from the user
		int nSelection = rand() % 5;			// pick a random output string
		sResponse = Response[nSelection];		// assign the random string to the response string
		std::cout << sResponse << std::endl;	// print out the response string
	}
	return 0;
}

