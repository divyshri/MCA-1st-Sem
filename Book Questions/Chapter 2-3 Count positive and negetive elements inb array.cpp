#include<iostream>
using namespace std;
int main()
{
	int n,a[n],count_pstv=0,count_ngtv=0;
	cout<<"Enter the number of elements in the array"<<endl;
	cin>>n;
	cout<<"Enter elements of the array"<<endl;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
	{
		if(a[i]>=0)
			count_pstv++;
		else
			count_ngtv++;
	}
	cout<<"No. of positive values in the array "<<count_pstv<<endl;
	cout<<"No. of negetive values in the array "<<count_ngtv<<endl;	
}
