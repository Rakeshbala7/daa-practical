#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"1)integer\n 2)string\n enter the case:";
	cin>>a;
	switch(a)
	{
		case 1:
			{
				int n,rev=0,rem,num;
				cout<<"Enter a number:";
				cin>>n;
				n=num;
				while(n!=0)
				{
				rem=n%10;
				rev=rev*10+rem;
				n=n/10;
				}
				if(n==rev)
				{
					cout<<"it is a palindrome";
				}
				else
				{
					cout<<"it is not a palindrome";
				}
				break;	
			}
		case 2:
			{
				string b,c;
				cout<<"enter the string:";
				cin>>b;
				b=c;
				if(b==c)
				{
					cout<<"it is a palindrome";
				}
				else
				{
					cout<<"it is not a palindrome";
				}
				break;
			}
	}
}
