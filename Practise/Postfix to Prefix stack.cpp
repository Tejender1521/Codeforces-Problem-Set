/* 
*********************************************************************
        TEJENDER  UPADHYAY
        2020KUCP1019
        C.S.E. BATCH A1
        Date:- 11 June 2021
*********************************************************************        
*/

/*
In the following program i have used only single stack that is the 
optimised solution for the given problem that is to convert Postfix
to Prefix.

In this program I use some part of C++ STL,
only for simplifying stack pop and push operations.
*/ 

#include <bits/stdc++.h>

using namespace std;

/*
I am using this function to check whether the character
is operator or operand so we operate further.
*/

bool isOperator(char x)
{
    switch (x)
    {
    case '+':
    case '-':
    case '/':
    case '*':
        return true;
    }
    return false;
}

/* 
Function to convert Postfix to Prefix using a single stack
*/

string postToPre(string post_exp)
{
    stack<string> s;

    int length = post_exp.size();

    
    for (int i = 0; i < length; i++)
    {
        if (isOperator(post_exp[i]))
        {
            // pop two operands from stack
            string op1 = s.top();
            s.pop();
            string op2 = s.top();
            s.pop();

            // concat the operands and operator
            string temp = post_exp[i] + op2 + op1;

            // Push string temp back to stack
            s.push(temp);
        }

        // if symbol is an operand
        else
        {
            // push the operand to the stack
            s.push(string(1, post_exp[i]));
        }
    }

    string ans = "";
    while (!s.empty())
    {
        ans += s.top();
        s.pop();
    }
    return ans;
}


int main()
{
    string post_exp;
    getline(cin, post_exp);

    /*  
    "ABC/-AK/L-*"
    Demo Postfix Expression to check whether our program 
    works fine or not.
    */

    cout << "Prefix : " << postToPre(post_exp);
    return 0;
}