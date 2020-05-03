#include<iostream>
using namespace std;
int main()
{
	int c,N;
	cout<<"Enter the value of N"<<endl;
	cin>>N;
	c=N;
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=c;j++)
			cout<<"   ";
		c--;
		for(int j=1;j<2*i;j++)
			cout<<" * ";
		cout<<endl;
	}
	c=c+2;
	for(int i=N-1;i>=1;i--)
	{
		for(int j=1;j<=c;j++)
			cout<<"   ";
		c++;
		for(int j=1;j<2*i;j++)
			cout<<" * ";
		cout<<endl;
	}
}
