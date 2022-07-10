#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    int s;
    cin >> s;
    int k=0;
    int y=0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n;i++){
        for (int j = i + 1; j < n;j++){
            k = k + j;
            y = i + k;
            if (y == s)
            {
                return i+1;
            }
            else{
                return -1;
            }
        }
        k = 0;
        y = 0;
    }

        return 0;
}

