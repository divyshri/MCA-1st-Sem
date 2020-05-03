/*
Program to demostrate the addition and multiplication of two matrices
*/
#include<iostream>
using namespace std;
int main()
{
	int a[3][3],b[3][3],c[3][3]={0},sum=0;
	cout<<"Enter elements of the first matrix"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<i<<" row and "<<j<<" column ";
			cin>>a[i][j];
		}
	}
	cout<<"Enter elements of the second matrix"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<i<<" row and "<<j<<" column ";
			cin>>b[i][j];
		}
	}
	int choice;
	cout<<"Enter your choice to perform following matrix operations"<<endl;
	cout<<"1. Matrix Addition"<<endl;
	cout<<"2. Matrix Subtraction"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
		{
			cout<<"Addition of the given two matrix is"<<endl;
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					c[i][j]=a[i][j]+b[i][j];
					cout<<c[i][j]<<"\t";
				}
				cout<<endl;
			}
			break;
		}
		case 2:
		{
			cout<<"Addition of the given two matrix is"<<endl;
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					c[i][j]=a[i][j]-b[i][j];
					cout<<c[i][j]<<"\t";
				}
				cout<<endl;
			}
			}
        break;
		}


}
