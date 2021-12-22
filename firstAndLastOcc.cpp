#include<iostream>
using namespace std;

int firstocc(int arr[], int n, int i, int key)
{
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i+1;
    }
    return firstocc(arr,n,i+1,key);
}
int lastocc(int arr[], int n,int i, int key){
    int restArray = lastocc(arr,n,i+1,key);
    if(restArray!=-1){
        return restArray;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}
int main(){
    int m;
    cin>> m;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }cout<<endl;

    int key;
    cin>>key;
    cout<<firstocc(arr,m,0,key)<<endl;
    cout<<lastocc(arr,m,0,key)<<endl;
}