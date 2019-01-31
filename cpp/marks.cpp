//program to decide pass or fail or pass with which division.

#include <iostream>
using namespace std;
int main()
{
	int m,c;
	cout<<"Please enter the marks";
	cin>>m;
	if(m<40)
	c =4;
	else if(m>=40&&m<50)
	c =3;
	else if(m>=50&&m<60)
	c =2;
	else if(m>=60)
	c=1;
	switch (c)
	{
	case 1 :
				cout<<"Pass with First Division";
				break;
	case 2: 
				cout<<"Pass with Second Division";
				break;
	case 3 :
				cout<<"Pass with Third Division";
				break;
	case 4 :
				cout<<"fail";
				break;
	default : cout<<"not a corrent input";
	}
}