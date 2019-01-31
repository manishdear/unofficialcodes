//program to check leap year or not.

#inlcude <iostream>
using namespace std;
int main()
{
	int y;
	cout<<"Please enter any year:\n";
	cin>>y;
	if(y/4==0)
	{
		cout<<"yes Entered year is a leap year";
	}
	else{
		cout<<"Not a leap year";
	}
}