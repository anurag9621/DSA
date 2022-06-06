#include <iostream>
using namespace std;

int main()
{
    int a[5] = {1, 3, 5, 7, 9};
    int b[5] = {2, 4, 6, 8, 10};
    int c[10];
    int i = 0, j = 0, k = 0;
    while (i < 5 && j < 5)
    {
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }

    for (; i < 5; i++)
    {
        c[k++] = a[i];
    }
    for (; j < 5; j++)
    {
        c[k++] = b[j];
    }
    for (int o = 0; o < 10; o++)
    {
        cout << c[o] << " ";
    }
}