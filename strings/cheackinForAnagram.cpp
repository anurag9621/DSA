#include<iostream>
using namespace std;

int main(){
    char A[] = "anurag";
    char C[] = "garmna";
    int B[26];

    for (int i = 0; A[i] != '\0';i++){
         B[A[i] - 97]++;
        
    }
    for (int i = 0; C[i] !='\0';i++){
        if (B[C[i] - 97] == 0)
        {
            cout << "not";
            break;
        }
    } 


        return 0;
}