// test

#include<iostream>
using namespace std;
class classproblem
{
	int a;
	int b;
	
	public:
	void getvalue(int x,int y)
	{
		a=x;
		b=y;
	}
	void showvalue()
	{
	cout<<"value of a is "<<a<<"\t"<<" value of b is "<<b<<endl;
	}
};
//int classproblem:: b;
//int classproblem:: a;

int main()
{
	classproblem i1,i2,i3,i4,i5,i6,i7,i8,i9,i10;
	i1.showvalue();
	i2.showvalue();
	i3.showvalue();
	i4.showvalue();
	i5.showvalue();
	i6.showvalue();
	i7.showvalue();
	i8.showvalue();
	i9.showvalue();
	i10.showvalue();
	i1.getvalue(11,22);
	i1.showvalue();
	i2.getvalue(5,4);
	cout<<"after "<<endl;
	
	i2.showvalue();
	i3.showvalue();
	i4.showvalue();
	i5.showvalue();
	i6.showvalue();
	i7.showvalue();
	i8.showvalue();
	i9.showvalue();
	i10.showvalue();
}
