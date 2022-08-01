#include <iostream>
using namespace std;

int main(){
    int arr[5] = {0, 1, 2, 3};
    int pos = 2;
    int val = 10;
    int i;
    for (i = 4; i > pos;i--){
        arr[i] = arr[i - 1];
    }
    arr[i] = val;
    for (int j = 0; j< 5;j++){
        cout << arr[j] << " ";
    }
}