#include <iostream>
using namespace std;
int search(int arr[],int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
int main(void)
{
    int arr[] = {4,5,8,6,2,1};
    int x = 1;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = search(arr, n, x);
    (result == -1);
     cout << "Element is not present in array"; 
     cout << "Element is present at index " <<result;
    return 0;
}

