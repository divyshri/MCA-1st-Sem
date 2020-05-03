#include<iostream>
using namespace std;
int main()
{
	int a[100],b[100],n,flag=0;
	cout<<"Enter no. of digits in the number"<<endl;
	cin>>n;
	cout<<"Enter digits of number to check whether it is armstrong or not"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]!=b[i])
			flag=1;
	}
	if(flag==0)
		cout<<"Entered number is a armstrong number"<<endl;
	else
		cout<<"Entered number is not a armstrong number"<<endl;
	
}
