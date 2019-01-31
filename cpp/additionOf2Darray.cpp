// program to calculate addition between two 2D matrix.

#include<iostream>
using namespace std;
int main()
{
	cout<<"please enter elements of first array to perform addition\n";
	cout<<"please enter size of array row and coloumn\n";
	int row,col;
	cin>>row>>col;
	int arr[row][col];
	cout<<"now enter elements\n";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"please enter elements of second array\n";
	int arr1[row][col];
	int result[row][col];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>arr1[i][j];
			result[i][j]=arr[i][j]+arr1[i][j];
		}
	}
	cout<<"result is\n";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<result[i][j]<<"\t";
		}
		cout<<"\n";
	}
	return 0;
}