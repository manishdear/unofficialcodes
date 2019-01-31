#include<iostream>
using namespace std;


int binarysearch(int arr[], int s,int len) {
	 	if(len<0)
	 		return 0;
	 	if(arr[len--]==s) {
	 		cout<<"number found at position "<<len+2<<endl;
	 		return 1; 
	 	}
	 	else
	 		return (binarysearch(arr,s,len));
	 }
	 
	 

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
int result = binarysearch(list,search,size);
if(result!=1)
	cout<<"number NOT FOUND try next time"<<endl;
return 0;
}


		