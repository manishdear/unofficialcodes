#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
int main()
{
	clrscr();
	char str[20], len;
	cout<<"Enter a string : ";
	gets(str);
	len=strlen(str);
	cout<<"Length of the string is "<<len;
	getch();
	return 0;
}