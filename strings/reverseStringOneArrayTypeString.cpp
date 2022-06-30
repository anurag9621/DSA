#include <iostream>
using namespace std;

int main()
{

    char A[] = "Anurag";
    int i;
    for (i = 0; A[i] != '\0'; i++)
    {
    }
    i = i - 1;
    int k;
    for (int j = 0; j < i; j++, i--)
    {
        k = A[j];
        A[j] = A[i];
        A[i] = k;
    }
    cout << A;
    return 0;
}