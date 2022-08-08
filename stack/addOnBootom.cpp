#include <iostream>
#include <stack>
using namespace std;
int sh(stack<int> &s, int p)
{
    
    if (s.empty())
    {
        s.push(p);
    }
    int ch = s.top();
    s.pop();
    sh(s, p);

    s.push(ch);
}
int main()
{
    stack<int> s;
    int p = 10;
    s.push(1);
    s.push(2);
    s.push(3);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    sh(s, p);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}