//program to reverse the string

#include<iostream>
#include<cstring>
using namespace std;

void reversit(char[]);


int main ()
{
    char str[50];
    
    cout << "Enter a string : ";
    gets(str);
	
	reversit(str);
    
    return 0;
}

void reversit(char str[])
{
	int i, j;
	char temp;
	int len = strlen(str);
    for(i=0; i< len/2; i++)
	{
		temp = str[i];
		str[i] = str[len-i-1];
		str[len-i-1] = temp;
	}
    cout << "\nReverse string : " << str;
}

