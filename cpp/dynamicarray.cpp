// program to demostrate dynamic array.

#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int ptr;
	cout<<"please enter size of new array\n";
	int n;
	cin>>n;
	ptr=new int[n];
	int ar[]={1,20,34,55,65};
	for(int i=0;i<n;i++)
	{
		ptr[i]=&ar[i];
	}
	cout<<"elements are\n";
	for(int i=0; i<n;i++)
	{
		cout<<ptr[i]<<endl;
	}
	return 0;
}