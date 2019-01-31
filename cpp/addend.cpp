// program to add at end of a circular queue

#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;


struct node{
	int info;
	node* next;
};

node* ptr;
node* first;
ifstream infile ("file.txt");



void add(){
	node* cpt = (node*)malloc(sizeof(int));
	//cout<<"enter data"<<endl;
	infile >> cpt->info;
	cpt->next = first;
	ptr ->next = cpt;
	ptr = ptr->next;
}


	
char ch;
int main(){
	
	    ptr = (node*)malloc(sizeof(int));
		first = ptr;
		//cout<<"enter data"<<endl;
		infile>> ptr->info;
		ptr->next = NULL;
	 
	 char ch;
	// cout<< "enter Y/N "<<endl;
	 infile>> ch;
	 while(ch == 'y'){
		 if(ch ='y')
			add();
		 //cout<< "enter Y/N "<<endl;
	     infile>> ch;
	 }
		
	// for printing all nodes.
		
	cout<<" our linklist data are"<<endl;
	node* link = first;
	do{
		cout<< link->info<<endl;
		link = link->next;
	}while(link!= first);
	/*while(link->next != first){
		cout<<link->info <<endl;
		link = link->next;
	}*/
	
	// addition at the end
	cout<< " for addition at the end "<< endl;
	node* add = (node*)malloc(sizeof(node));
	cout<< " enter data"<< endl;
	cin>> add->info;
	ptr = first;
	while(ptr->next!=first){
		ptr=ptr->next;
	}
	ptr->next = add;
	add->next= first;
	
	//print after addtion 
	cout<< " print after addition"<<endl;
	link = first;
	do{
		cout<< link->info<< endl;
		link = link->next;
	}while(link!=first);
	return 0;
}
