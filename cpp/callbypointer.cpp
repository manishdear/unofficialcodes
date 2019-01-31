//program to demostrate call by pointer

#include <iostream>
using namespace std;
void swap(int *x, int *y);
int main()
{
	int a=10;
	int b=20;
	cout<<"befor swaping "<<a<<" "<<b\n;
	swap(&a,&b);
	cout<<"after swaping "<<a<<" "<<b\n;
	return 0;
}
void swap(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}