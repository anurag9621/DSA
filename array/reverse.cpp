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
    int arrb[n];
    int j = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        arrb[j] = arr[i];
        j++;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = arrb[i];
    }
    for (int i; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}