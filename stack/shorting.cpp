#include <iostream>
#include <stack>
using namespace std;
void sortedInsert(stack<int> &stack, int num)

{
    if (stack.empty() || (!stack.empty() && stack.top() < num))
    {
        stack.push(num);
        return;
    }
    int n = stack.top();
    stack.pop();
    sortedInsert(stack, num);
    stack.push(n);
}
void sort(stack<int> &stack)
{
    if (stack.empty())
    {
        return;
    }
    int num = stack.top();
    stack.pop();

    sort(stack);
    sortedInsert(stack, num);
}
int main()
{
    stack<int> s;
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        s.push(arr[i]);
    }
    sort(s);
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}