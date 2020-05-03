#include<iostream>
using namespace std;
int main()
{
	int num,temp,sum=0;
	cout<<"Enter number upto which you want to generate perfect numbers "<<endl;
	cin>>num;
	for(int i=1;i<num;i++)
	{
		sum=0;
		for(int j=1;j<i;j++)
		{
		if(i%j==0)
			sum=sum+j;
		}
		if(sum==i)
			cout<<"  "<<i<<"  ";
	}
}
