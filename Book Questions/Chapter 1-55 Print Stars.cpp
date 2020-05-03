#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter no. of rows you want to print stars"<<endl;
	cin>>num;
	for(int i=0;i<=num;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<" * ";
		}
		cout<<endl;
	}
	return 0;
}
