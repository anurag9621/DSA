#include<iostream>
#include<stack>
using namespace std;

int main()
{
    string str = "Anurag";
    stack<char> s;
    for (int i = 0; i < str.length();i++){
        char ch = str[i];
        s.push(ch);
    }
    string rev = "";
    while(!s.empty()){
        char ch = s.top();
        rev.push_back(ch);
        s.pop();
    }
    cout << rev;
    return 0;
}