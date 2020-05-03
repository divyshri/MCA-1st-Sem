/*
Program to demostrate the multiplication of two matrices
*/
#include<iostream>
using namespace std;
int main()
{
	int a[3][3],b[3][3],c[3][3]={0};
	cout<<"Enter elements of the first matrix"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<i<<" row and "<<j<<" column ";
			cin>>a[i][j];
		}
	}
	cout<<"Enter elements of the second matrix "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<i<<" row and "<<j<<" column ";
			cin>>b[i][j];
		}
	}
    cout<<"Matrix Multiplication of the two given matrix is"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                c[i][j]=c[i][j]+(a[i][j]*b[j][k]);
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<c[i][j]<<"\t";
        }
        cout<<endl;
    }
}
