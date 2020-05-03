#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter first number"<<endl;
	cin>>a;
	cout<<"Enter second number"<<endl;
	cin>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"After swapping first number is "<<a<<" and second number is "<<b;
	return 0;	
}
