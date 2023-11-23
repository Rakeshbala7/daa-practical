#include <iostream>
using namespace std;
int main()
{
    int n,a=1;
	cout<<"Enter number of rows:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int space=1;space<=n-i;space++)
            cout <<" ";
        for(int j=0;j<=i;j++)
        {
            if(j==0||i==0)
                a=1;
            else
                a=a*(i-j+1)/j;

            cout<<a<<" ";
        }
        cout<<endl;
    }
    return 0;
}
