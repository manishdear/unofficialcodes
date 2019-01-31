#include <iostream>
using namespace std;

int main() {
	cout<<"enter no of counter "<<endl;
	int n;
	cin>>n;
	
	int ar[4];
	int k =0;
	for(int i=0;i<n;i++) {
		cin>>ar[i];
	}
	for(int i=0;i<n;i++) {
		if(ar[i]-k<=0)
		{
			cout<<"YOU got ticket in "<<k+1 <<"mins"<<endl;
			break;
		}
		
		if(n-1==i) {
			i=0;
		continue;
		}
		k++;
	}
	return 0;
}