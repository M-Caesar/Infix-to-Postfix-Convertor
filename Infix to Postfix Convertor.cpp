// Infix to Postfix Convertor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Infix to Postfix Convertor.h"
#include <cctype>

string inFixpostFix::convert(string prefix)
{
    stack<char> operators;
    string postfix;
    postfix.clear();

    for (char c : prefix)
    {
        if (std::isalpha(c))
        {
            postfix.push_back(c);
        }
        else if (c == '(')
        {
            operators.push(c);
        }
        else if (c == ')')
        {
            while (operators.empty() == false && operators.top() != '(')
            {
                postfix.push_back(operators.top());
                operators.pop();
            }
            operators.pop();
        }
        else if (std::isspace(c))
        {
            continue;
        }
        else
        {
                while (operators.empty() == false && (precedence(c) <= precedence(operators.top())))
                {
                    postfix.push_back(operators.top());
                    operators.pop();
                }
                operators.push(c);
        }
    }

    while (operators.empty() == false)
    {
        postfix.push_back(operators.top());
        operators.pop();
    }
    return postfix;
}

int inFixpostFix::precedence(char op)
    {
        if (op == '+' || op == '-')
        {
            return 1;
        }
        else if (op == '*' || op == '/')
        {
            return 2;
        }
        return 0;
    }

    