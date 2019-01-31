//programt to convert temprature from F to C and C to F.

#include <iostream>
using namespace std;
int main()
{
	int n;
	double T,result=0.0;
	cout<<"please enter\n"<<" 1. if you want to convert F to C\n"<<"2. if you want to convert C to F";
	cin>>n;
	cout<<"plese enter the temprature";
	cin>>T;
	if(n==1)
	{
		result=(T-32)*1/1.8;
	}
	else if(n==2)
	{
		result=(T*1.8)+32;
	}
	else
	{
		cout<<"wrong choice TRY AGAIN!";
	}
	cout<<"Result is:"<<result;
}