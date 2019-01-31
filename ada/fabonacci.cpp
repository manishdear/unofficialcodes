#include<iostream>
using namespace std;

int main() {
	int result =1;
	cout<<"enter limit for fabonacai series "<<endl;
	int n,temp;
	cin>>n;
	int a =0 , b=1;
	cout<<a<<b;
	while(b!=n) {
		temp=a+b;
		a=b;
		b=temp;
		cout<<b;
	}
	cout<<endl;
return 0;
}