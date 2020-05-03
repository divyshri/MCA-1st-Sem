/*
Program to find the determinant of the matrices and check for the singular
*/
#include<iostream>
using namespace std;
int main()
{
	int a[3][3],sum=0,i,j,k;
	cout<<"Enter elements of the first matrix"<<endl;
	for(int i=0;i<3;i++)	
	{
		for(int j=0;j<3;j++)
		{
			cout<<i<<" row and "<<j<<" column"<<endl;
			cin>>a[i][j];
		}
		cout<<endl;
	}
	for(i=0;i<3;i++)
	{
		if(i==0){
			j=1;
			k=2;			
		}
		else if(i==1){
			j=0;
			k=2;
		}
		else if(i==2)
		{
			j=0;
			k=1;
		}
		sum=sum+a[i][i]*(a[j][j]*a[k][k]-a[j][k]*a[k][j]);
	}
	cout<<"Determinant of the given matrix is : "<<sum<<endl;
	/*for(int i=0;i<3;i++)	
	{
		for(int j=0;j<3;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}*/
}
