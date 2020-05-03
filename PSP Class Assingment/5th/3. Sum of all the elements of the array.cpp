#include<iostream>
using namespace std;
int sum(int *a1,int n1)
{
	int sum=0;
	for(int i=0;i<n1;i++)
		sum=sum+a1[i];
	return sum;
}
int main()
{
	int a[100],size,sum1;
	cout<<"Enter the size of the first array"<<endl;
	cin>>size;
	cout<<"Enter the elements of the first array"<<endl;
	for(int i=0;i<size;i++)
		cin>>a[i];
	sum1=sum(a,size);
	cout<<"Sum of the all the elements of the array is "<<sum1<<endl;
	
}

