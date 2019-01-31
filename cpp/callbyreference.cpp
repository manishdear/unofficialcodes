//program to demostrate call by reference.

#include <iostream>
using namespace std;
void swap(int &x,int &y)
{
	int t;
	t=x;
	x=y;
	y=t;
}
int main()
{
	int a=10;
	int b=20;
	cout<<"Befor swapping"<<a<<" "<<b\n;
	swap(a,b);
	cout<<"After swapping"<<a<<" "<<b\n;
}
