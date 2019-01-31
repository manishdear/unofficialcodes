//program to search a number from given array.

#include <iostream>
using namespace std;
int main()
{
	int ar[5],n,c=0;
	cout<<"Please enter the 5 number\n";
	for(int i=0;i<5;i++)
	{
		cin>>ar[i];
	}
	cout<<"Please enter the number you want to search\n";
	cin>>n;
	for(int i=0;i<5;i++)
	{
		if(n==ar[i])
		{
			cout<<"Yes we got the number at position: ";
			cout<<i+1;
			c++;
		}
	}
	if(c==0)
		cout<<"Number is not in list";
		
}