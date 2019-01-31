#include<iostream>
using namespace std;

int factorialrecursive(int n) {
	if(n==1) {
		cout<<n<<"=";
		return 1;
	}
	if(n>1) 
		cout<<n<<"*";
	return (n*factorialrecursive(--n));
}

int main() {
	cout<<"enter any number "<<endl;
	int n;
	cin>>n;
	int result = n*factorialrecursive(n);
	cout<<result<<endl;
return 0;
}