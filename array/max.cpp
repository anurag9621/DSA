#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array:- ";
    cin >> n;
    int arr[n];
    cout << "Enter the vlaues of array:- ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > k)
        {
            k = arr[i];
        }
    }
    cout << k;
}