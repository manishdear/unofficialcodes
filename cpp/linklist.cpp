// forword linklist

#include<iostream>
using namespace std;

struct link{
int data;
link* next;
};

class linklist{
    private:
    link* first,*ptr;

    public:
	//link* ptr;
	linklist(){
        first = NULL;
		//ptr = NULL;
		link* test = new link;
		cout<< " enter first data"<< endl;
		cin>> test -> data;
		first = test;
		ptr = first;
    }
	
    void addition(){
       link* newlink = new link;
	   cout<< "enter data"<< endl;
       cin>> newlink -> data;
	   ptr -> next = newlink;
	   ptr = ptr->next;
	   ptr -> next = NULL;
    }
	
    void display();
};

    void linklist:: display(){
        link* current = first;
        while( current !=NULL){
            cout << current->data << endl;
            current = current -> next;
        }
    }
int main(){
    linklist li;
	char ch;
	cout<< "enter choice <y/n> to add more data or exit>"<<endl;
	cin>> ch;
	cout<< endl;
	do{
		li.addition();
		cout<< "enter choice <y/n> to add more data or exit"<<endl;
		cin>> ch;
		cout<< endl;
	}while(ch=='y');

    li.display();
    return 0;

}
