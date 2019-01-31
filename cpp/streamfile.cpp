//program to save data to the file.

#include<iostream>
#include<fstream>

using namespace std;

int main(){
	
	char ch = 'c';
	int n = 95;
	double d = 12.01;
	string s = "hello how are you ?";
	
	ofstream outfile("file1.txt");
	outfile << ch<< n <<" " << d <<" " << s << endl;
	
	cout<< "file saved succsessfully  " << endl;
	return 0;
}