#pragma once

#include <string>
#include <stack>
#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

class inFixpostFix
{
private:
	string prefix;
	string postfix;
	stack<char> fixStack;
public:
	//Precondition: The infix string has been successfully read
	//Postcondition: The function returns the converted expression as a postfix expression
	string convert(string prefix);

	//Precondition: Function is provided with the mathematical operation to be appraised
	//Postcondition: Ranking of precedence is returned with * and / being of higher precedence than + and -
	int precedence(char op);
};