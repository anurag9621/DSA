#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int max=INT_MIN
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int jumps = 0;
    int i = 0;
    while (i < n)
    {
        if(arr[0]==0){
            return -1;
        }
        i += arr[i];
        if (i
            == n - 1 ) {
            jumps += 0;
        }
        else
        {
            jumps += 1;
        }
    }
    

        return jumps;
}