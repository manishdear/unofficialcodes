// backward linklist

#include<iostream>
using namespace std;

struct link{
int data;
link* next;
};

class linklist{
    private:
    link* first;

    public:
    linklist(){
        first = NULL;
    }
    void addition(int d);
    void display();
};

    void linklist:: addition(int d){
       link* newlink = new link;
       newlink -> data = d;
       newlink -> next = first;
       first = newlink;
    }

    void linklist:: display(){
        link* current = first;
        while( current !=NULL){
            cout << current->data << endl;
            current = current -> next;
        }
    }
int main(){
    linklist li;
    li.addition(25);
    li.addition(36);
    li.addition(45);
    li.addition(56);
    li.addition(68);

    li.display();
    return 0;

}

