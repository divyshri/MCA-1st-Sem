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
	double temp=1,x,num,sum=0;
	cout<<"Enter the value of x "<<endl;
	cin>>x;
	cout<<"Enter the no. of terms upto which you want sum "<<endl;
	cin>>num;
	for(int i=1;i<=num;i++)
	{
		
		cout<<"temp = "<<temp<<endl;
		sum = sum + (pow(x,temp)/fact(temp));
		temp = i+2;
	}
	cout<<"Sum of the series is "<<sum<<endl;
}
