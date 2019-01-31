#include<iostream>
using namespace std;
int a =0 , b=1;
int fabonacairecursion(int n) {
	if(n==0)
      		return 0;
   	else if(n==1)
      		return 1;
  	else
      		return(fabonacairecursion(n-1) + fabonacairecursion(n-2));
}

int main() {
	cout<<"enter limit for fabonacai series "<<endl;
	int n,result;
	cin>>n;
	for(int i=0;i<=n;i++) {
		result = fabonacairecursion(i);
		cout<<result;
	}
	cout<<endl;
return 0;
}