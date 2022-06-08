#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    int p=(arr[n-1]*(arr[n-1]+1))/2;

    if(sum==p){
        cout<<"no missing number";
    }
    else{
        cout<<p-sum;
    }


}