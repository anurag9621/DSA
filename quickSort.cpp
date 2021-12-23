#include<iostream>
using namespace std;

void swap(int arr[],int i,int j){
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]= temp;
}

int partition(int arr[], int l, int r){
    
    int pivot=arr[r];
    int i=l-1;

    for(int j=l;j<r;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
    return i+1;
}

void quickSort(int arr[],int l,int r){

    if(l<r){
        int pi= partition(arr,l,r);
        quickSort(arr,l,pi-1);
        quickSort(arr,pi+1,r);
    }

}

int main(){
     int n;
    cout<<"Enter the Length of array:- ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array:- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }cout<<endl;

    quickSort(arr,0,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

}