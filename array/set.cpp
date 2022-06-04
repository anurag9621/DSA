#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Index:- ";
    cin>>n;
    int k;
    cout<<"Enter the Value:- ";
    cin>>k;
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    if(n>=0&&n<10){
        arr[n]=k;
    }
    else{
        cout<<"Invalid Index ";
    }
}