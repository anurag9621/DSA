#include <iostream>
using namespace std;

int main()
{
    int *p;
    p = new int[5];
    p[0] = 3;
    p[1] = 4;
    p[2] = 5;
    p[3] = 6;
    p[4] = 7;
    int *q;
    q = new int[10];
    // storing data in P to Q
    for (int i = 0; i < 5; i++)
    {
        q[i] = p[i];
    }
    // add more element in Q

    q[5] = 8;
    q[6] = 9;
    // deleting P from HEEP
    delete p;
    // giving the value of Q to P
    p = q;
    // giving the value of Q is NULL
    q = NULL;
    for (int i = 0; i < 10; i++)
    {
        cout << p[i] << " ";
    }
}