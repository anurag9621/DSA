#include <iostream>
using namespace std;

int main()
{
    int n;
    int m;
    cout << "Enter the size of arr 1";
    cin >> n;
    cout << "Enter the size of arr 2";
    cin >> m;
    int a[n];

    int b[m];


    cout << "Enter the arr";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter the arr";
    for (int j = 0; j < m; j++)
    {
        cin >> b[j];
    }
    

    int p=0;

    for (int k=0;k<n;k++){
        for (int l =0;l<m;l++){
            if (a[k]==a[l]){
                return p;
            }
        }
        p=p+a[k];
    }
    if(p<10){
        cout<<p;
    }
    
}