#include <iostream>
using namespace std;

int main()
{
    int a[5] = {2, 3, 4, 5, 6};
    int *p;
    p = new int[5];
    p[0] = 3;
    p[1] = 4;
    p[2] = 5;
    p[3] = 6;
    p[4] = 7;
    for (int i = 0; i < 5; i++)
    {
        cout << a[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] <<" ";
    }
    delete []p;
}