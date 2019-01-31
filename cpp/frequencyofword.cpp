//frequency of perticular letter in given string.

#include <iostream>
#include<string.h>
using namespace std;
int main()
{
	string s,l;
	int count=0;
	cout<<"Please enter the String\n";
	getline(cin,s);
	cout<<"Please enter the letter you want to find frequency";
	getline(cin,l);
	for(int i=0;i<s.size;i++)
	{
		if(l==s[i])
		{
			count++;
		}
	}
	cout<<"Frequency of given "<<l<<" in "<<s<<" is: "<<count;
	
}