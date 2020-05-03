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
	double num,x,sum=0;
	cout<<"Enter the value of x"<<endl;
	cin>>x;
	cout<<"Enter the value of n upto which you want the sum "<<endl;
	cin>>num;
	for(int i=0;i<num;i++)
	{
		sum = sum + (pow(x,i)/fact(2*i));
	}
	cout<<"Sum of the given series is "<<sum<<endl;
}
