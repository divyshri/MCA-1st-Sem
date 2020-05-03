#include<iostream>
using namespace std;
int main()
{
	char a[5]={'a','b','c','d','e'},num=5;
	for(int i=0;i<=num;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<" "<<a[j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
