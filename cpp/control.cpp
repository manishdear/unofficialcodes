//program to demostrate control statement if else and loops.

#include<iostream>
using namespace std;
int main()
{
	cout<<"here we will see demostration of control statements\n";
	cout<<"generally there are two type of control statements\n";
	cout<<"1.if else\n";
	cout<<"2.loops\n"<<"lets checkout for if else\n";
	cout<<"please enter any number to check whether it is even or not\n";
	int n;
	cin>>n;
	if(n%2==0)
	{
		cout<<"yes it is a even no\n";
	}
	else{
		cout<<" yes it is a odd no\n";
	}
	cout<<"now lets check for loops\n";
	cout<<"please enter any number to check for prime or not\n";
	int p;
	cin>>p;
	int count=0;
	for(int i=3;i<p/2;i++)
	{
		if(p%i==0)
		{
			count++;
		}
	}
	if(count==0)
	{
		cout<<"yes it is a prime no\n";
	}
	else{
		cout<<" No it is not a prime no\n";
	}
	return 0;
}