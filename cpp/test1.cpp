#include <iostream>
using namespace std;

int main(){
	int ar[] = {1,2,3,4,5,6};
	int* p1, *p2;
	p1 = ar;
	p2 = p1+5;
	cout<< ((char*)p2 - (char*)p1) << endl;
	return 0;
}