#include <iostream>
using namespace std;

int main(){
    int a[5]={1,3,5,7,9};
    int b[5]={2,4,6,8,9};
    int c[10];

    for(int i=0,j=0,k=0;i<10;i++){
        if(a[j]<b[k]){
            c[i]=a[j];
            j++;
        }
        else
        {
            c[i]=b[k];
            k++;
        }
        
    }
    for(int i=0;i<10;i++){
        cout<<c[i]<<" ";
    }cout<<endl;
}