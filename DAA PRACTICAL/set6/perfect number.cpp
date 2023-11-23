#include <iostream>
using namespace std;
int main ()
{
	try
	{
    int n,sum=0;
	cout<<"enter the number:";
	cin>>n;    
    if(n>0)
	{
	for(int i=1;i<n;i++)
	{
        if(n%i==0)
        sum=sum+i;
    }
    if(sum==n)
    {
	cout<<n<<" is a perfect number";
}
    else
    {
        cout<<n<<" is not a perfect number";
}
}
else
{
	throw(n);
}
}
	catch(int n)
	{
		cout<<"invalid input";
	}
}
