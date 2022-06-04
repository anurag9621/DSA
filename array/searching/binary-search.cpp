#include <iostream>
using namespace std;

int BinarySearch(int arr[], int key)
{
    int l, mid, h;
    l = 0;
    h = sizeof(arr);

    while (l < h)
    {
        mid = (l + h) / 2;
        if (key == arr[mid])
            return mid;
        else if (key < arr[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}

int main()
{
    int arr[] = {2, 3, 4, 5, 6};
    int key = 5;
    BinarySearch(arr, key);
    return 0;
}