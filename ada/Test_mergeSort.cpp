#include<iostream>
using namespace std;

void mergesort(int*,int ,int );
void merge(int*,int ,int ,int );


int size;
int list[5];

int main() {

	cout<<"enter size of list "<<endl;
	cin>>size;
	cout<<"enter elements for the list"<<endl;
	for(int i=1;i<size;i++)
		cin>>list[i];
	mergesort(list,1,4	);
	cout<<"sorted array:"<<endl;
	for(int i=1;i<size;i++)
		cout<<list[i]<<endl;

	return 0;
}


void mergesort(int* data,int p,int r) {

int q;
if(p<r) {
q = p+(r-p)/2;
mergesort(data,p,q);
mergesort(data,q+1,r);
merge(data,p,q,r);
}	

}


void merge(int* data,int p,int q,int r) {

	int n1= q-p+1;
	int n2= r-q;

	int arL[n1+1];
	int arR[n2+1];

	for(int i=1;i<=n1;i++) 
 		arL[i] = data[p+i-1];

	for(int j=1;j<=n2;j++)
 		arR[j] = data[q+j];

	arL[n1+1] = 99999;
	arR[n2+1] = 99999;

	int i=1,j=1;

	for(int k=p;k<=r;k++) {

		if (arL[i]<=arR[j]) {
			data[k] =arL[i];
			i+=1;
		}

		else {
			data[k] = arR[j];
			j+=1;
		}
	}
}