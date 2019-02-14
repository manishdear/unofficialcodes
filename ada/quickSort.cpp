#include<iostream>
#include<fstream>
using namespace std;

void swap(int*,int ,int );
int quicksort(int*,int ,int);
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
	quicksort(A,0,size);
	
	cout<<"sorted array:"<<endl;
	display(A , size);

	return 0;
}

int quicksort(int* data, int left, int right) {
	if((right-left) <= 1) 
		return 0;
	
	int yellow = left+1;
	for(int green = left+1; green<right; green++) {
		if(data[green] <= data[left]) {
			swap(data,yellow,green);
			yellow++;
		}
	}
	swap(data, left, yellow-1);
	quicksort(data,left,yellow);
	quicksort(data,yellow+1,right);
	return 0;
}

void swap(int* A,int minIndex,int pos) {
	int temp = A[pos];
	A[pos] = A[minIndex];
	A[minIndex] = temp;
}

//def display
void display(int* A,int size) {
	for(int i=0;i<size; i++) {
		cout<<A[i]<<" ";
	}
}