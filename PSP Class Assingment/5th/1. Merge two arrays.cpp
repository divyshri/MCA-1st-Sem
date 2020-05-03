/*
Program to merge two 1-D Arrays
*/
#include<iostream>
using namespace std;
int main()
{
	int a[100],b[100],c[100],size1,size2;
	cout<<"Enter the size of the first array"<<endl;
	cin>>size1;											//Size of the first array
	cout<<"Enter elemets of the first array"<<endl;
	for(int i=0;i<size1;i++)							
		cin>>a[i];										//Reading the elements of the first array
	cout<<"Enter the size of the second array"<<endl;
	cin>size2;											//Size of the second array
	cout<<"Enter the elements of second array"<<endl;	
	for(int i=0;i<size2;i++)
		cin>>b[i];										//Reading the elemets of the second array
	for(int i=0;i<size1;i++)
		c[i]=a[i];										//Copy the elements of the first array to a new array C
	for(int i=0;i<size2;i++)
		c[i+size1]=b[i];								//Copy the elements of the second array to a new array C
	cout<<"Merged array is : "<<endl;
	for(int i=0;i<size1+size2;i++)				
		cout<<c[i]<<"\t";								//Display the array C containing the elements of both the aaray
	return 0;
	
}

