/*
Program to demostrate the addition and multiplication of two matrices
*/
#include<iostream>
using namespace std;
int main()
{
	int a[3][3],b[3][3],flag=0;
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
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i][j]!=b[i][j])
                flag=1;
        }
    }
    if (flag)
        cout<<endl<<"Matrix are not same"<<endl;
    else
        cout<<endl<<"Matrix are same"<<endl;


}
