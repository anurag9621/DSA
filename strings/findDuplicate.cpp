#include <iostream>
using namespace std;

int main()
{

    char A[] = "finding";
    long int H = 0, x = 0;
    int M = 97;
    for (int i = 0; A[i] != '\0'; i++)
    {
        x = 1;
        x = x << (A[i] - 97);
        if ((x & H )> 0)
        {
            cout << A[i];
        }
        else{
            H = x || H;
        }
    }
    return 0;
}