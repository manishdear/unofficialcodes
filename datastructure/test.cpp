#include<iostream>
#include<fstream>
using namespace std;

int f() {
	static int x=7;
	return x--;
}

int main() {
	for (f();f();f())
		cout<< f();
	return 0;
}