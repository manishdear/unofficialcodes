#include<iostream>
using namespace std;

void mergesort(int* data,int startpoint,int end);
void merge(int* data,int startpoint,int mid,int end);
void display(int* A,int size);

int main() {
	int noOfSingers;
	
	//input of no of Singers
	cin>> noOfSingers;  
	
	if((noOfSingers<2) || (noOfSingers>100000)) {
		return 0;
	}
	
	// array for storage of output
	int output[noOfSingers];
	
	int lb[noOfSingers];  // array of type singer
	int ub[noOfSingers];
	
	
	//input of upper_bound and lower_bound
	for(int i=0; i<noOfSingers; i++) { 
		cin>> lb[i];
		cin>> ub[i];
		
		if((lb<1) || (lb>=ub) || (ub>1000000000)) {
			return 0;
		}
	}
	
	//copy of lower_bound into other array
	int copylb[noOfSingers];
	for(int i=0;i<noOfSingers; i++)
		copylb[i] =lb[i];
		
		
	mergesort(copylb, 0, noOfSingers-1);
	
	//output calculation 
	for(int i=0; i<noOfSingers; i++) {
		for(int j=0;j<noOfSingers; j++) {
			
			if(lb[i]==copylb[j]) {
				output[i] = (noOfSingers-1-j)*2;
				break;
			}
		}
	}
	
	//output Display
	display(output, noOfSingers);
	
	return 0;
}
	
void mergesort(int* data,int startpoint,int end) {
	int mid;
	if(startpoint < end) {
		mid = (startpoint+(end-startpoint)/2);
		mergesort(data,startpoint,mid);
		mergesort(data,mid+1,end);
		merge(data,startpoint,mid,end);
	}
}


void merge(int* data,int startpoint,int mid,int end) {

	//int n1= q-p+1;
	int n1 = mid - startpoint +1;
	//int n2= r-q;
	int n2 = end - mid;

	int arL[n1+1];
	int arR[n2+1];

	for(int i=0;i<n1;i++) 
 		arL[i] = data[startpoint+i];   //data[p+i-1];

	for(int j=0;j<n2;j++)
 		arR[j] = data[mid+1+j];     //data[q+j];

	arL[n1] = 99999;
	arR[n2] = 99999;

	int i=0,j=0,k = startpoint;

	while (k<=end) {
		if (arL[i]<=arR[j]) {
			data[k] =arL[i];
			i++;k++;
		}

		else if (arL[i]>arR[j]) {
			data[k] = arR[j];
			j++;k++;
		}
	}
}

void display(int* A,int size) {
	for(int i=0;i<size; i++) {
		cout<<A[i]<<" ";
	}
	cout<<endl;
}