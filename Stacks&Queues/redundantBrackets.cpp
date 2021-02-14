#include <stack>
bool checkRedundantBrackets(char *input)
{
    stack<char> s;
    int count = 0;
    for (int i = 0; input[i] != "\0"; i++)
    {
        if (input[i] != ")")
        {
            s.push(input[i]);
        }
        else if (input[i] == ")")
        {
            count = 0;
            while (s.top() != "(")
            {
                count++;
                s.pop();
            }
            s.pop();
            if (count == 0)
            {
                return 1;
            }
            else
            {
                continue;
            }
        }
    }
    return 0;
}