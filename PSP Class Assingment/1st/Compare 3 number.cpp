
//Program to check three numbers and print them in ascending order

#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter first number";
	cin>>a;
	cout<<"Enter second number";
	cin>>b;
	cout<<"Enter third number";
	cin>>c;
	if(a>=b&&a>=c)					//Condition to check that A is greater then B and C
	{
		if(b>c)						//If above condition is true then check B is greater then C
		{
			cout<<"Ascending order "<<c<<"  "<<b<<"  "<<a;
		}
		else						//If the above condition fails i.e. B is less than C
			cout<<"Ascending order "<<b<<"  "<<c<<"  "<<a;
	}
	if(b>=a&&b>=c)					//Condition to check that B is greater then A and C
	{
		if(a>c)						//If above condition is true then check A is greater then C
		{
			cout<<"Ascending order "<<c<<"  "<<a<<"  "<<b;
		}
		else						//If the above condition fails i.e. A is less than C
			cout<<"Ascending order "<<a<<"  "<<c<<"  "<<b;
	}if(c>=b&&c>=a)					//Condition to check that C is greater then B and A
	{	
		if(b>a)						//If above condition is true then check B is greater then A
		{
			cout<<"Ascending order "<<a<<"  "<<b<<"  "<<c;
		}
		else						//If the above condition fails i.e. B is less than A
			cout<<"Ascending order "<<b<<"  "<<a<<"  "<<c;
	}
}

