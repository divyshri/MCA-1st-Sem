#include<iostream>
using namespace std;
int main()
{
	int num, sum=0;
	cout<<"Enter value of n to calculate sum of series 2 + 4 + 6 +......+ n"<<endl;
	cin>>num;
	for(int i=1;i<=num;i++)
	{
		sum=sum+(i*2);
	}
	cout<<"Sum of the series is "<<sum<<endl;
}
