//program to take input from file

#include<iostream>
#include<fstream>

using namespace std;

int main(){
	
	char ch;
	int n;
	double d;
	char s[80];
	ifstream infile ("file1.txt");
	infile >> ch >> n >> d;
	
	cout<< ch << endl << n << endl << d << endl;	
	
	while(infile){
		infile.get(ch);
		cout << ch;
	}
	
	//cout<< infile.rdbuf();
	cout<< endl;
	
	//cout<< ch << endl << n << endl << d << endl << s << endl;
	return 0;
}