//program to demostrate structure

#include<iostream>
using namespace std;
struct student
{
	int rn;
	double marks;
	string name;
};
int main()
{
	student s[5];
	double sum=0;
	cout<<"Please enter the details\n";
	for(int i=0;i<5;i++)
	{
		cout<<"roll no.\n";
		cin>>s[i].rn;
		cout<<"marks\n";
		cin>>s[i].marks;
		cout<<"name\n";
		cin>>s[i].namea;
		sum+=s[i].marks;
	}
	cout<<"average marks is: "<<sum/5;
}
