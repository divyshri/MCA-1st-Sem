#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int num,sum=0;
	cout<<"Enter no. of term to calculate sum of series 1^2 + 3^2 + 5^2 + ......n^2"<<endl;
	cin>>num;
	for (int i=1;i<=num;i++)
	{
		sum = sum + pow(2*i-1,2);
	}
	cout<<"Sum of the series is "<<sum<<endl;
}
