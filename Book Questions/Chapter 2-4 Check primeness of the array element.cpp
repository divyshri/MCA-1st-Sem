#include<iostream>
using namespace std;
int prime(int x)
{
	int flag=1;
	for(int i=2;i<x;i++)
	{
		if(x%i==0)
			flag=0;
	}
	return flag;
}
int main()
{
	int n,a[100],check=0;
	cout<<"Enter no. of elements in the array"<<endl;
	cin>>n;
	cout<<"Enter elemets of the array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];	
		check=prime(a[i]);
		if(check==1)
			cout<<a[i]<<" is a prime number"<<endl;
		else 
			cout<<a[i]<<" is not a prime number"<<endl;
	}
	return 0;
}

