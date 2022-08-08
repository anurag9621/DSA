#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> num;
    num.push(5);
    num.push(6);
    num.push(7);
    num.push(8);
    num.push(9);
    num.push(10);
    num.push(11);

    stack<int> sto;
    int a = num.size() % 2;
    if (a== 0)
    {
        
        for (int i = 0; i <(num.size()/2) ;i++){
            int c = num.top();
            sto.push(c);
            num.pop();
        }
        num.pop();
        while(!sto.empty()){
            int b = sto.top();
            num.push(b);
            sto.pop();
        }
        
    }
    else{
        int ss = (num.size() -1) / 2;
        for (int i = 0; i < ss; i++)
        {
            int c = num.top();
            sto.push(c);
            num.pop();
        }
        num.pop();
        while (!sto.empty())
        {
            int b = sto.top();
            num.push(b);
            sto.pop();
        }
    }
    while(!num.empty()){
        cout << num.top()<<", ";
        num.pop();
    }
    return 0;
}