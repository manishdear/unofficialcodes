//program to find maximum and minimum from given array.

#include <iostream>
using namespace std;
int main()
{
	int ar[5],t;
	cout<<"Please enter the 5 number\n";
	for(int i=0;i<5;i++)
	{
		cin>>ar[i];
	}
	for(int i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(ar[i]>ar[j])
			{
				t=ar[j];
				ar[j]=ar[i];
				ar[i]=t;
			}
		}
	}
	cout<<"largest is: "<<ar[4]\n;
	cout<<"smallest is: "<<ar[0]\n;
}
			