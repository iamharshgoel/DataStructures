#include <iostream>
using namespace std;
#include <stack>
#include <cstring>

bool checkBalanced(char *exp)
{

    stack<char> s;
    for (int i = 0; i < strlen(exp); i++)
    {
        if (exp[i] == "(" || exp[i] == "[" || exp[i] == "{")
        {
            s.push(exp[i]);
        }
        else if (exp[i] == ")")
        {
            if (s.empty() || s.top() != "(")
            {
                return false;
            }
            else
            {
                s.pop();
            }
        }
        else if (exp[i] == "]")
        {
            if (s.empty() || s.top() != "[")
            {
                return false;
            }
            else
            {
                s.pop();
            }
        }
        else if (exp[i] == "}")
        {
            if (s.empty() || s.top() != "{")
            {
                return false;
            }
            else
            {
                s.pop();
            }
        }
    }
    return s.empty();
}

int main() 
{
    string input;
    cin >> input;
    cout << ((checkBalanced(input)) ? "true" : "false");
}