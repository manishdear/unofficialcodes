//program to reverese the linklist 

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
	
class linklist{
	private:
	char ch;
	
	public:

	linklist(){
		ptr = (node*)malloc(sizeof(int));
		first = ptr;
		infile>> ptr->info;
		ptr->next = NULL;
		
		// choice 
		
		infile>> ch;
		while(ch == 'y'){
			
			if(ch ='y')
				add();
			infile>> ch;
		}
		
		// display
		
		cout<<"our linklist data are"<<endl;
		node* link = first;
		do{
			cout<< link->info<<endl;
			link = link->next;
		}while(link!= NULL);
	}
	
	void add(){
		node* cpt = (node*)malloc(sizeof(int));
		infile >> cpt->info;
		cpt->next = NULL;
		ptr ->next = cpt;
		ptr = ptr->next;
	}
	
	void reverse(){
		node* cpt, *tpt;
		tpt = first;
		ptr = first->next;
		cpt = ptr->next;
		tpt->next = NULL;
		
		while(ptr->next != NULL){
			
			ptr->next = tpt;
			
			tpt = ptr;
			ptr = cpt;
			cpt = cpt-> next;
		}
		ptr->next = tpt;
		
		first = ptr;
	}
	
	void display(){
		node* link = first;
		do{
			cout<< link->info<<endl;
			link = link->next;
		}while(link!= NULL);
    }
			
	
};

int main(){
	linklist li;
	
	//reverse logic
	li.reverse();
	cout<< endl;
	cout<< "reverse order is "<< endl;
	li.display();
	
	return 0;
}