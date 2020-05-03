#include<iostream>
using namespace std;
int main()
{
	int a[100],loc,n,min,temp,i,j,flag;
	cout<<"Enter number of elements in the array"<<endl;
	cin>>n;
	cout<<"Enter elements of the array"<<endl;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
	{
		min=a[i];
		flag=0;
		for(j=i+1;j<n;j++)
		{
			if(min>a[j])
			{
				min=a[j];
				flag=1;
				loc=j;
			}
		}
		if(flag)
		{
			a[loc]=a[i];
			a[i]=min;
		}
	}
	cout<<"Sorted array is"<<endl;
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\t";
	return 0;
	
}
