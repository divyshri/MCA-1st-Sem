#include<iostream>
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
	double temp,num,sum=0;
	cout<<"Enter the no. of term upto which you want the sum"<<endl;
	cin>>num;
	temp=num;
	for(int i=1;i<=num;i++)
	{
		sum =sum + 1/fact(i);
	}
	cout<<"Sum of the series upto "<<temp<<" terms is "<<sum<<endl;
	return 0;
	
}
