#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
        int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int x){
        if(top==size-1){
            cout << "Stack is Overflow";
        }
        else{
            top++;
            arr[top] = x;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout << "Stack Underflow";
        }
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout << "Stack is empty";
            return -1;
        }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }


};

int main()
{
    Stack st(5);
    st.push(22);
    st.push(44);
    st.push(20);
    cout<<st.peek()<<endl;
    cout << st.isEmpty();
    return 0;
}