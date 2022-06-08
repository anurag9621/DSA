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
    int j = 0;
    int lastdube=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1]&&lastdube!=arr[i])
        {
            lastdube=arr[i];
            j = i + 1;
            while (arr[j] == arr[i])
                j++;
            cout << arr[i] << " appearing " << j - i << " times"<<endl;
        }
    }
    return 0;
}