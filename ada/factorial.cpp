#include<iostream>
using namespace std;

int main() {
	int result =1;
	cout<<"enter any number "<<endl;
	int n;
	cin>>n;
	for(int i=n;i>0;i--) {
		if(i>1) 
			cout<<i<<"*";
		result = result*i;
		if(i==1) 
			cout<<i<<"=";
		}
	cout<<result<<endl;
return 0;
}