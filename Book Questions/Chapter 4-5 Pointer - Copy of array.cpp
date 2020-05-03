#include<iostream>
using namespace std;
int main()
{
	int main[100],copy[100],*M,size,*C;
	cout<<"Enter the total no. of details you want to enter"<<endl;
	cin>>size;
	cout<<"Enter elements of the array"<<endl;
	M=main;
	for(int i=0;i<size;i++)
	{
		cin>>*M;
		*M++;
	}
	int *ptr = new int[100];
	for(int i=0;i<size;i++)
	{
		ptr[i]=main[i];
	}
	for(int i=0;i<size;i++)
	{
		cout<<ptr[i]<<endl;
	}
	
	return 0;	
}
