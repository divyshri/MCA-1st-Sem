#include<iostream>
using namespace std;
int main()
{
	int n,a[100],sum=0;
	cout<<"Enter the number of elements in the array"<<endl;
	cin>>n;
	cout<<"Enter the elements of the array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	cout<<"Array elements in revers order is "<<endl;
	for(int i=n-1;i>=0;i--)
		cout<<a[i]<<"\t";
	cout<<endl<<"Sum of the array element is : "<<sum<<endl;
	return 0;
	
}
