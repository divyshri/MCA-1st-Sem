#include<iostream>
using namespace std;
int main()
{
	int a[100],n,temp;
	cout<<"Enter number of elements in the array"<<endl;
	cin>>n;
	cout<<"Enter elements of the array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(i>0)
		{
			for(int j=0;j<=i;j++)
			{
				if(a[i]<a[j])
				{
					temp=a[j];
					a[j]=a[i];
					a[i]=temp;
					
				}
			}
		}
	}
	cout<<"Sorted array is"<<endl;
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\t";
	return 0;
	
}
