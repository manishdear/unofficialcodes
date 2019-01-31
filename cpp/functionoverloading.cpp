//program to demostrate function overloading.

#include <iostream>
using namespace std;
void area(float a);
void area(double &a,double &b)
{
	double result=a*b;
	cout<<"area is: "<<result"\n";
}
int main()
{
	double x, y;
	cout<<"To calculate area Please enter the details";
	cin >> x;
	cin >> y;
	area(x);
	area(x,y);
	return 0;
}
void area(float a)
{
	float result=(22/7)*a*a;
	cout<<"area is: "<<result"\n";
}
