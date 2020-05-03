/*
Define a class String and overload == to compare to strings and + operator for concatenation of two strings
*/
#include<iostream>
#include<string.h>
using namespace std;
class Matrix
{
	public:
		int m[3][3];
	public:
		friend Matrix operator+(Matrix,Matrix);
		void get_data()
		{
			cout<<"Enter elements of the first matrix"<<endl;
			for(int i=0;i<3;i++)	
			{
				for(int j=0;j<3;j++)
				{
					cout<<i<<" row and "<<j<<" column"<<endl;
					cin>>m[i][j];
				}
				cout<<endl;
			}	
		}	
		void display()
		{
			cout<<"Matrix is "<<endl<<endl;
			for(int i=0;i<3;i++)	
			{
				for(int j=0;j<3;j++)
				{
					cout<<m[i][j]<<"\t";
				}
				cout<<endl;
			}	
		}		
};
Matrix operator+(Matrix x, Matrix y) 
{
	Matrix temp;
	for(int i=0;i<3;i++)	
		{
			for(int j=0;j<3;j++)
			{
				temp.m[i][j]=x.m[i][j]+y.m[i][j];
			}
			cout<<endl;
		}	
	return temp;
}

int main()
{
	Matrix m1,m2,m3;
	m1.get_data();
	m2.get_data();
	m3= m1+m2;
	m3.display();
	return 0;
}
