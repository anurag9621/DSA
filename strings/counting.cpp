#include <iostream>
using namespace std;

int main()
{
    char A[] = "How are you";
    int i;
    int vcount=0;
    int ccount = 0;
    for (i = 0; A[i] != '\0'; i++)
    {
        if (A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u' || A[i] == 'A' || A[i] == 'E' || A[i] == 'I' || A[i] == 'O' || A[i] == 'U'){
            vcount++;
        }
        else if ((A[i] >= 'A' && A[i] <= 'Z') || (A[i] >= 'a' && A[i] <= 'z'))
        {
            ccount++;
        }
    }
    cout<<vcount<<endl;
    cout<<ccount<<endl;

}