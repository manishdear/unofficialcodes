#include<iostream>
#include <stdlib.h>
using namespace std;


struct node{
	int info;
	node* next;
};

node* ptr;

void add(){
	node* cpt = (node*)malloc(sizeof(int));
	cout<<"enter data"<<endl;
	cin >> cpt->info;
	ptr ->next = cpt;
	cpt->next = NULL;
}


	
char ch;
int main(){
	node* first;
	do{
		node* first;
		node* ptr = (node*)malloc(sizeof(int));
		first = ptr;
		cout<<"enter data"<<endl;
		cin>> ptr->info;
		ptr->next = NULL;
		cout<< "enter Y/N "<<endl;
		cin>> ch;
		if(ch ='Y')
			add();
		
	}while(ch!='N');
		
	cout<<" our linklist data are"<<endl;
	ptr = first;
	while(ptr->next != NULL){
		cout<<ptr->info <<endl;
		ptr = ptr->next;
	}
	return 0;
}