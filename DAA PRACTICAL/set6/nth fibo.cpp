#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if(n<=1)
	{
        return n;
    }
    int fib=1;
    int prev=1;
    for (int i=2;i<n;++i)
	{
        int temp=fib;
        fib=fib+prev;
        prev=temp;
    }
    return fib;
}
int main()
{
    int n;
    cout <<"Enter the value of n to find the nth Fibonacci number: ";
    cin>>n;
    if(n<0)
	{
        cout<<"Invalid input. Please enter a non-negative integer."<< endl;
        return 1;
    }
    int result = fibonacci(n);
    cout << "The " << n << "nth Fibonacci number is: " << result << endl;
    return 0;
}

