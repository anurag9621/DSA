#include <iostream>
using namespace std;

int main()
{
    char A[] = "How are you";
    int words = 1;
    for (int i = 0; A[i] != '\0'; i++)
    {
        if (A[i] == ' ' && A[i - 1] != ' ')
        {
            words++;
        }
    }
    cout << words << endl;
    return 0;
}