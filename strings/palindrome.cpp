#include <iostream>
using namespace std;

int main()
{
    char A[] = "Anurag";
    char B[7];
    int i;
    for (i = 0; A[i] != '\0'; i++)
    {
    }
    i = i - 1;
    int j;
    for (j = 0; i >= 0; j++, i--)
    {
        B[j] = A[i];
    }
    B[j] = '\0';

    for (int k = 0; A[k] != '\0' && B[k] != '\0'; k++)
    {
        if (A[k] != B[k])
        {
            cout << "Not Equal";
            break;
        }
    }
    return 0;
}