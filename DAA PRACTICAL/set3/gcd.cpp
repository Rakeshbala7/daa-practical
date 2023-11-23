#include <iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
	{
        return a;
    }
	else
	{
        return gcd(b,a%b);
    }
}
int main() {
    int num1,num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    if(num1>0&&num2>0)
    {
    int result=gcd(num1,num2);
    cout<<"GCD of"<<num1<<"and"<<num2<<"is:"<<result<<endl;
	}
	else
	{
		cout<<"invalid input";
	}
	return 0;
}

