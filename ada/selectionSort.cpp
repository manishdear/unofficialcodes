#include<iostream>
#include<fstream>
using namespace std;

int sort(int* ,int ,int);
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
	for(int i = 0;i<size-1;i++) {
		int minIndex = sort(A,i,size);
		swap(A,minIndex,i);
	}
	
	//display;
	cout<<"final sorted array is "<<endl;
	display(A,size);
	return 0;
}

int sort(int* A,int startpoint,int end) {
	int min = A[startpoint];
	int pos =startpoint;
	for(int i=startpoint+1;i<end;i++) {
		if(min>A[i]) {
			min=A[i];
			pos = i;
		}
	}
	return pos;
}

void swap(int* A,int minIndex,int pos) {
	int temp = A[pos];
	A[pos] = A[minIndex];
	A[minIndex] = temp;
}

void display(int* A,int size) {
	for(int i=0;i<size; i++) {
		cout<<A[i]<<" ";
	}
}