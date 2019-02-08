#include<iostream>
#include<fstream>
using namespace std;

int Selection(int*,int ,int);
void sort(int* ,int ,int);
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
	Selection(A,0,size);
	
	//display;
	cout<<"final sorted array is "<<endl;
	display(A,size);
	return 0;
}

int Selection(int* A,int pos, int size) {
	if(pos >= size-1)
		return 0;
	
	sort(A,pos,size);
	Selection(A, pos+1,size);
	return 0;
}

void sort(int* A,int startpoint,int end) {
	int min = A[startpoint];
	int pos =startpoint;
	for(int i=startpoint+1;i<end;i++) {
		if(min>A[i]) {
			min=A[i];
			pos = i;
		}
	}
	swap(A,pos,startpoint);
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