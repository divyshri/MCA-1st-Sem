#include<iostream>
#include<math.h>
using namespace std;
double fact(int num)
{
	double sum=1;
	while(num>0)
	{
		sum=sum*num;
		num--;
	}
	return sum;
}
int main()
{
	double num,x,sum1=0,sum2=0;
	cout<<"Enter the value of x"<<endl;
	cin>>x;
	cout<<"Enter the value of n upto which you want the sum "<<endl;
	cin>>num;
	for(int i=0;i<num;i=i+2)
	{
		sum1 = sum1 + (pow(x,i)/fact(2*i));
	}
	for(int i=1;i<num;i=i+2)
	{
		sum2 = sum2 + (pow(x,i)/fact(2*i));
	}
	sum1=sum1-sum2;
	cout<<"Sum of the given series is "<<sum1<<endl;
}
