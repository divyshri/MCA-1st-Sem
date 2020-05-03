//program to print table of entered no.
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number of which you want to generate table " ;
	cin>>n;
	for(int i=1;i<=10;i++)
	{
		cout<<n*i<<endl;	
	}	
	return 0;
}

