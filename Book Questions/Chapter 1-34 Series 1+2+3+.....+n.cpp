#include<iostream>
using namespace std;
int main()
{
	int num,sum=0;
	
	cout<<"Enter the number upto which you want the sum of the series 1 + 2 + 3 +....+ n "<<endl;
	cin>>num;
	for(int i=1;i<=num;i++)
	{
		sum=sum+i;
	}
	cout<<"Sum of the series is "<<sum<<endl;
}
