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
	string inFptF;
	stack<char> fixStack;
public:
	//Precondition:
	//Postcondition:			
	//string convert(string, string);
	string convert(string prefix);
	int precedence(char op);
};