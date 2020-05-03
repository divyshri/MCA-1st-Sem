#include<iostream>
using namespace std;
int main()
{
	int a[100],b[100],c[100],size1,size2;
	cout<<"Enter no. of elements in the first array"<<endl;
	cin>>size1;
	cout<<"Enter the elements of the first array"<<endl;
	for(int i=0;i<size1;i++)
		cin>>a[i];
	cout<<"Enter no. of elements in the second array"<<endl;
	cin>>size2;
	cout<<"Enter the elements of the second array"<<endl;
	for(int i=0;i<size2;i++)
		cin>>b[i];
	for(int i=0;i<size1;i++)
		c[i]=a[i];
	for(int i=0;i<size2;i++)
		c[i+size1]=b[i];
	cout<<"merged array is"<<endl;
	for(int i=0;i<size1+size2;i++)
		cout<<c[i]<<"\t";
	
}
