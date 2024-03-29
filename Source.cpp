#include <iostream>
#include "Infix to Postfix Convertor.h"


int main()
{
	string prefix;
	string postfix;
	inFixpostFix test;
	ifstream inFile;
	string file;

	std::cout << "Enter the file that you would like to open: " << endl;
	std::cin >> file;
	inFile.open(file);
	if (!inFile.is_open())
	{
		cout << "Could not open file, exit the program and try again" << endl;
	}
	while (!inFile.eof()) 
	{
		std::getline(inFile, prefix);
		std::cout << "This is the infix statement: " << prefix << endl;
		std::cout << "This is the postfix: " << test.convert(prefix) << endl;
		//std::cout << test.convert(prefix) << endl;
	}
}