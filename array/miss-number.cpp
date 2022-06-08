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
    int l = arr[0];
    int h = arr[n - 1];
    int diff = l;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - i != diff)
        {
            cout << i + diff;
            break;
        }
    }

    return 0;
}
