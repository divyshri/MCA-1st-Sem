#include<iostream>
using namespace std;
int main()
{
	int a[100],size,max,min;
	cout<<"Enter the no. elements "<<endl;
	cin>>size;
	cout<<"Enter elements of the array"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	min=a[0];
	max=a[1];
	for(int i=0;i<size;i++)
	{
		if(a[i]<min)
			min=a[i];
		else if (a[i]>max)
			max=a[i];
	}
	cout<<"Minimum of the array is : "<<min<<endl;
	cout<<"Maximum of the array is : "<<max<<endl;
	return 0;
}
