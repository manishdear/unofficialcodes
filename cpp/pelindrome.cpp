//program for pelindrome number

#include<iostream>
using namespace std;
int main()
{
  cout<<"pelindrome number is\n";
  int n,rel,res=0,num;
  for(int j=999;j>=100;j--)
  {
  for(int i=999;i>=100;i--)
  {
	  n=i*j;
      num=n;
      while(n>0)
      {
		  rel=n%10;
          res+=rel;
          res*=10;
          n/=10;
      }
	  res/=10;
      //cout<<num<<"\n";
      if(res==num)
	  {
		  
		  cout<<"pelindrome number"<<num<<"\n";
		  cout<<"i is :"<<i<<"\t"<<"j is :"<<j<<"\n";
	      break;
      }
	  res=0;
	  n=0;
	  num=0;
	  rel=0;
  }
  }
  return 0;
}