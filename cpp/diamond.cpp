//program to print diamond pattern.

#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5-i;j++)
		{
			cout<<" ";
		}
		for(int k=1;k<=i;k++)
		{
			cout<<"*";
		}
		if(i>=2)
		{
			for(int l=2;l<=i;l++)
			{
				cout<<"*";
			}
		}
		cout<<"\n";
	}
	for(int i=1;i<=4;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<" ";
		}
		for(int k=i;k<=4;k++)
		{
			cout<<"*";
		}
		for(int l=3;l>=i;l--)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}