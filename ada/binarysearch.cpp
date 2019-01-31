//program for binary search

#include<iostream>
using namespace std;
int main() {

cout<<"enter size of list "<<endl;
int size;
cin>>size;
int list[size];
int counter =0;

cout<<"enter elements for the list"<<endl;
for(int i=0;i<size; i++)
	cin>>list[i];
	
cout<<"enter the number you want to search"<<endl;
int search ;
cin>>search;

for(int i=0;i<size;i++) {
	if(list[i]==search) {
		cout<<"number FOUND at index "<< i+1<<endl;
		counter++;
	}
}
if(counter!=1)
	cout<<"number NOT FOUND  try next time " << endl;

return 0;
}