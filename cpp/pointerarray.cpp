//program to demostrate pointer array.

#include<iostream>
using namespace std;
int main()
{
	cout<<"here we will see how to store a value in pointer array\n";
	cout<<"please enter limit of pointer array\n";
	int l;
	cin>>l;
	int *ptr[l];
	cout<<"now enters the elements \n";
	int n[]={1,2,20,30,50};
	for(int i=0;i<l;i++)
	{
		ptr[i]=&n[i];
	}
	cout<<"here is the elemets of pointer array\n";
	for(int i=0;i<l;i++)
	{
		cout<<*ptr[i]<<"\n";
	}
	return 0;
}