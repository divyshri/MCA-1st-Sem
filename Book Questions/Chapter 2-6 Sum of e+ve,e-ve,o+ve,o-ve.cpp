#include<iostream>
using namespace std;
int main()
{
	int a[100],n,e_pstv=0,e_ngtv=0,o_pstv=0,o_ngtv=0;
	cout<<"Enter the number os elements in the array"<<endl;
	cin>>n;
	cout<<"Enter numbers"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]%2==0 && a[i]>0)
			e_pstv+=a[i];
		else if (a[i]%2==0 && a[i]<0)
			e_ngtv+=a[i];
		else if (a[i]%2!=0 && a[i]>0)
			o_pstv+=a[i];
		else if (a[i]%2!=0 && a[i]<0)
			o_ngtv+=a[i];
	}
	cout<<"Sum of even positive terms is : "<<e_pstv<<endl;
	cout<<"Sum of even negetive terms is : "<<e_ngtv<<endl;
	cout<<"Sum of odd positive terms is : "<<o_pstv<<endl;
	cout<<"Sum of odd negetive terms is : "<<o_ngtv<<endl;
	return 0;
}

