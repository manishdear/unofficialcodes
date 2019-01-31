//program to demostrate user defined string

#include<iostream>
#include<cstring>
using namespace std;

class String //user-defined string type
{
	private:
	char* str; //pointer to string
	public:
	String(char* s) //constructor, one arg
	{
		int length = strlen(s); //length of string argument
		str = new char[length+1]; //get memory
		strcpy(str, s); //copy argument to it
	}
	~String() //destructor
	{
		cout << "Deleting str.\n";
		delete[] str; //release memory
	}
	void display() //display the String
	{
		cout << str << endl;
	}
};
int main(){

	String s1 = "Who knows nothing doubts nothing.";
	cout << "s1="; //display string
	s1.display();
	return 0;
}
