#include<iostream>
using namespace std;
int main()
{
	int n,a[n];
	cout<<"Enter the no. of elements of the array"<<endl;
	cin>>n;
	cout<<"Enter the elements of the array"<<endl;
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"Even odd status"<<endl;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
			cout<<a[i]<<" is a even number"<<endl;
		else
			cout<<a[i]<<" is a odd number"<<endl;
	}	
	return 0;
}
