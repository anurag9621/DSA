#include<iostream>
using namespace std;

int main(){
    char A[] = "anuraag";
    char C[] = "garunaa";
    int B[26];
    int i;
    for (i = 0; A[i] != '\0'; i++)
    {
        B[A[i] - 97]++;
    }
    for (i = 0; C[i] !='\0';i++){
        B[C[i] - 97]--;
        if (B[C[i] - 97] < 0)
        {
            cout << "not";
            break;
        }
    } 
    if(A[i]=='\0'){
        cout << "it is";
    }

        return 0;
}