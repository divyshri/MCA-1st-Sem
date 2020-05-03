#include<iostream>
using namespace std;
int main()
{
	int a[100],n,temp;
	cout<<"Enter number of elements in the array"<<endl;
	cin>>n;
	cout<<"Enter elements of the array"<<endl;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"Sorted array is"<<endl;
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\t";
	return 0;
	
}
