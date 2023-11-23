#include <iostream>
#include <algorithm>
using namespace std;
void mthMaxAndnthMin(int arr[], int size, int m, int n) {
    sort(arr, arr + size);
    cout << "nth minimum element: " << arr[n - 1] << endl;
    sort(arr, arr + size, greater<int>());
    cout << "mth maximum element: " << arr[m - 1] << endl;
}
int main() {
    int m,n,i=0,j,arr[i];
    cout<<"Enter numbers of Elements";
	cin>>j;
    cout<<"Enter the Elements";
    for(i=0;i<j;i++)
    {
    cin>>arr[i];
}
    int size=sizeof(arr)/sizeof(arr[0]);
	cout<<"enter the value of n and m:";
	cin>>m;
	cin>>n;
    mthMaxAndnthMin(arr,size,m,n);
    int sum=m+n;
    int difference=m-n;
    cout<<"sum="<<sum;
    cout<<"difference="<<difference;
}

