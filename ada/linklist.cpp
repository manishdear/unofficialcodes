

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
node* second;                                                   // for second link list
ifstream infile ("file.txt");                                   //for auto input

void add(){
	node* cpt = (node*)malloc(sizeof(int));
	//cout<<"enter data"<<endl;
	infile >> cpt->info;
	cpt->next = NULL;
	ptr ->next = cpt;
	ptr = ptr->next;
	free(cpt);
}                                                      // add function to add element but in this program adding element is auto.

	
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
	 
	 //for second link list
	 //free(ptr);
	 ptr = (node*)malloc(sizeof(int));
	 second = ptr;
	 
	 infile>> ptr->info;
	 ptr->next = NULL;
	 
	 infile>> ch;
	 while(ch == 'y'){
		 if(ch ='y')
			add();
		 //cout<< "enter Y/N "<<endl;
	     infile>> ch;
	 }
	 
	 // display all elements
	 
	cout<<" element for the first linklist"<<endl;
	node* link = first;
	do{
		cout<< link->info<<endl;
		link = link->next;
	}while(link!=NULL);
	
	cout<<" elements of second linklist"<<endl;
	
	link = second;
	do{
		cout<< link->info<<endl;
		link = link->next;
	}while(link!= NULL);
	
	cout<<"concatenation"<<endl;
	
	node* tpr;
	tpr =first;
	while(tpr->next!=NULL)
		tpr=tpr->next;
	tpr->next = second;
	
	cout<<" New list are"<<endl;
	
	link = first;
	do{
		cout<< link->info<<endl;
		link = link->next;
	}while(link!=NULL);
	 
	 return 0;
}
	 