//program for conversion from string to integer.

#include<iostream>
#include<string>
#include<conio.h>
#include<stdio.h>
#include<cstdlib>
using namespace std;
int main()
{
	string str="56";
	int n;
	n=std::atoi(str);
	cout<<"new converted no is "<<n<<"\n";
	return 0;
}