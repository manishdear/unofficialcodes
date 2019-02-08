#include<iostream>
#include<fstream>
using namespace std;

int main(){
	
	cout<<"enter the size of  array"<<endl;
	int row , col,i,j;
	cin>>row>>col;
	int ar[row][col];
	
	cout<<"input recieved"<<endl;
	ifstream infile ("input.txt");
	for(i=0;i<row;i++) {
		for(j=0;j<col;j++) {
			infile >> ar[i][j];
		}
	}
	
	for(i=0;i<row;i++) {
		for(j=0;j<col;j++) {
			cout<<ar[i][j]<<" ";
		}cout<<endl;
	}
	
	//swapping of ij -> ji
	for(i=0;i<row;i++) {
		for(j=i;j<col;j++) {
			int temp = ar[i][j];
			ar[i][j] = ar[j][i];
			ar[j][i] = temp;
		}
	}
	
	//swapping of columns first with last , second with second last and so on...
	for(i=0;i<row;i++) {
		for(j=0;j<col/2;j++) {
			int temp = ar[i][j];
			ar[i][j] = ar[i][col-1-j];
			ar[i][col-1-j] = temp;
		}
	}
	
	cout<<"output is"<<endl;
	for(i=0;i<row;i++) {
		for(j=0;j<col;j++) {
			cout<<ar[i][j]<<" ";
		}cout<<endl;
	}
	return 0;
}