//program to calculate prime number between given number

#include <iostream>
using namespace std;
int main()
{
	int n, m,count=0;
	cout<<"please enter the interval to print prime No.";
	cin>>n>>m;
	if(n<3) {
            cout<<"2 3 ";
			n=5;
        }
		if(n==3){
			cout<<"3 ";
			n=5;
		}
	for(int i=n;i<=m;i++) {
            for(int j=2;j<i/2;j++) {
                if(i%j==0) {
                    count++;
                    break;
                }
            }
            if(count==0) {
                cout<<i<<" ";
            }
            else {
                count=0;
            }
        }
}
		