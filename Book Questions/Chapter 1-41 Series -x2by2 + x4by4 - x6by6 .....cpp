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
	double x,num,sum1=0,sum2=0;
	cout<<"Enter the value of x "<<endl;
	cin>>x;
	cout<<"Enter no. of terms upto which you want the sum"<<endl;
	cin>>num;
	for(int i=2;i<=2*num;i=i+4)
	{
		sum1=sum1+(pow(x,i)/fact(i));
	}
	for(int i=4;i<=2*num;i=i+4)
	{
		sum2=sum2+(pow(x,i)/fact(i));
	}
	sum2=sum2-sum1;
	cout<<"Sum of the series is "<<sum2<<endl;
	return 0;
}


