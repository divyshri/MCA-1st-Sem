#include<iostream>
using namespace std;
int main()
{
	int temp,num,sum=0,count=0;
	cout<<"Enter any positive integer"<<endl;
	cin>>num;
	while(num>0)
	{
		temp=num%10;
		count++;
		sum=sum+temp;
		num=num/10;
	}
	cout<<"Number of digits in the entered integer is "<<count<<endl<<endl;
	cout<<"Sum of all digits of the entered number is "<<sum<<endl;
}
