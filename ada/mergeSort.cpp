#include<iostream>
#include<fstream>
using namespace std;

void mergesort(int*,int ,int );
void merge(int*,int ,int ,int );
void display(int*, int);

int main() {
	//@size : for taking size of array;
	int size;
	cout<<"Enter the size of array"<<endl;
	cin >> size;
	int A[size];
	ifstream infile("sortInput.txt");
	
	//input from file named sortInput.txt;
	for(int i=0;i<size;i++) {
		infile >> A[i];
	}
	
	//inputed array is:
	cout<<"Inputed array is"<<endl;
	display(A,size);
	cout<<endl;
	
	//sorting start
	mergesort(A,0,size-1);
	
	cout<<"sorted array:"<<endl;
	display(A , size);

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

//def display
void display(int* A,int size) {
	for(int i=0;i<size; i++) {
		cout<<A[i]<<" ";
	}
}