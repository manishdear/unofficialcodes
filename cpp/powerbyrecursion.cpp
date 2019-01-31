//program to calucate power of given base through recursion

#include<iostream>
#include<conio.h>
using namespace std;
int pow(int a,int b);
int main()
{
	int x,y; 
	cout<<"Please enter the base and power to calculate power\n";
	cin>>x>>y;
	int result= pow(x,y);
	cout<<"result is : "<<result;
	getch();
}
int pow(int a,int b)
{
	if(b!=0)
	{
		return(a*pow(a,b=b-1));
	}
	else 
	{
		return 1;
	}
}