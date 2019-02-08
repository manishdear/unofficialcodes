#include<iostream>
#include<fstream>
using namespace std;

void sort(int* ,int);
void swap(int* ,int,int); 
void display(int* ,int);

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
	
	//sorting start;
	for(int pos=1 ;pos<size ;pos++) {
		sort(A,pos);
	}
	
	//display;
	cout<<"final sorted array is "<<endl;
	display(A,size);
	
	return 0;
}

void sort(int* A,int startpoint) {
	int nextpos =startpoint;
	while((nextpos > 0) && (A[nextpos] < A[nextpos-1])) {
		swap(A,nextpos,nextpos-1);
		nextpos = nextpos-1;
	}
}

void swap(int* A,int current,int previous) {
	int temp = A[previous];
	A[previous] = A[current];
	A[current] = temp;
}

void display(int* A,int size) {
	for(int i=0;i<size; i++) {
		cout<<A[i]<<" ";
	}
}