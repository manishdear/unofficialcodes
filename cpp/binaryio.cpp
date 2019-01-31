//program to take binary input from file from same directory.

#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	int Max = 80;
	int str[Max];
	
	for(int i=0; i<Max; i++)
		str[i] = i;
	
	ofstream os ("data.dat", ios::binary);
	os.write( reinterpret_cast <char*>(str), Max*sizeof(char));
	os.close();
	
	//read;
	
	for(int i=0; i<Max; i++)
		str[i] = 0;
	
	ifstream is("data.dat", ios::binary);
	is.read(reinterpret_cast<char*>(str), Max*sizeof(char));
	for(int i=0; i<Max; i++)
		cout<< str[i] ;
	
	for(int i=0; i<Max; i++)
		if(str[i] !=i){
			cerr << "data is incorect \n";
			return 1;
		}
	
	cout<<"Data is correct "<<endl;
	return 0;
}