#include <iostream>
#include "Infix to Postfix Convertor.h"


int main()
{
	string prefix;
	string postfix;
	inFixpostFix test;
	//std::cin >> prefix;
	std::getline(std::cin, prefix);
	std::cout << "This is the infix statement: " << prefix << endl;
	std::cout << "This is the postfix" << endl;
	std::cout << test.convert(prefix) << endl;
}