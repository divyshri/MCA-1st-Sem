#include<iostream>
using namespace std;
int main()
{
	int roll[100],*R,size,marks[100],*M;
	cout<<"Enter the total no. of details you want to enter"<<endl;
	cin>>size;
	R=roll;
	M=marks;
	for(int i=0;i<size;i++)
	{
		cout<<"Enter roll no. of "<<i+1<<" student"<<endl;
		cin>>*R;
		cout<<"Enter Marks of "<<i+1<<" student"<<endl;		
		cin>>*M;
		*R++;
		*M++;
	}
	R=roll;
	M=marks;
	for(int i=0;i<size;i++)
	{
		cout<<"Enter roll no. of "<<i+1<<" student = \t"<<*R<<endl;
		cout<<"Enter Marks of "<<i+1<<" student = \t"<<*M<<endl;		
		*R++;
		*M++;
	}
	return 0;	
}
