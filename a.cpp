#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the size of array";
    
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the element of array of inder"<<i+1;
        cin >> arr[i];
    }
    int max = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        if(max<arr[i]){
            max = arr[i];
        }
    }
    cout << "Max in this array is " << max;
    return 0;
}