#include<iostream>
using namespace std;

int main()
{
	int n,flag1,flag2,i,j,k,x;
	cout<<"Enter the number :";
	cin>>n;
	cout<<endl;
	for(i=2;i<=n/2;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag1=1;
				break;
			}
			else{
				flag1=0;
			}
		}
		if(flag1==0)
		{
			x=n-i;
			for(k=2;k<x;k++)
			{
				if(x%k==0)
				{
					flag2=1;
					break;
				}
				else
				{
					flag2=0;
				}
			}
			if(flag2==0)
			{
				cout<<n<<"="<<i<<"+"<<x<<endl;
			}
		}
	}
	return 0;
}
