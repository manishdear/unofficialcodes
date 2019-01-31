// circular link list with auto input from file.text then addition of new node at the beginning;

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
	
	// for addition.
	cout<<"insertion at the beginning"<<endl;
	
	node* tpt = (node*)malloc(sizeof(int));
	cout<<" enter data "<<endl;
	cin>>tpt->info;
	link = first;
	
	// beginning.
	
	tpt->next = first;
	do{
		link = link->next;
	}while(link->next!= first);
	
	link->next = tpt;
	first = tpt;
	
	cout<< "after addition at beginning "<< endl;
	
	link = first;
	do{
		cout<< link->info<<endl;
		link = link->next;
	}while(link!= first);
	
	//for end;
	
	
	
	return 0;
}