#include <iostream>
#include <stack>
using namespace std;

int main()
{
    char s[] = "{()}";
    stack<char> p;
    for (int i = 0; s[i] != '\0'; i++)
    {
        char ch = s[i];
        if (ch == '(' || ch == '{' || ch == '[')
        {
            p.push(ch);
        }
        else
        {
            if (!p.empty())
            {
                char top = p.top();
                if (
                    (ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == '[' && top == ']'))
                {
                    p.pop();
                }
                else
                {
                    return 0;
                }
            }
            else
            {
                return 0;
            }
        }
    }
    if (p.empty())
        return 1;
}