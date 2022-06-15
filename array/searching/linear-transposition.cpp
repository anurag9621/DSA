#include <iostream>
using namespace std;

int main()
{
    int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int k = 8;
    for (int i = 0; i < 9; i++)
    {
        if (k == a[i])
        {
            swap(a[i], a[i - 1]);
            return i - 1;
        }
    }
    return -1;
}