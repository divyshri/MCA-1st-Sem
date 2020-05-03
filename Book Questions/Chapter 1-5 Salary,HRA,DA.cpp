#include<iostream>
using namespace std;
int main()
{
	double basic,hra,da,tax,salary=0;
	cout<<"Enter basic Salary "<<endl;
	cin>>basic;
	hra=basic*.4;
	da=basic*.8;
	tax=basic*.1;
	salary = basic+hra+da-tax;
	cout<<"Net Salary will be "<<salary<<endl;
	cout<<"HRA = "<<hra<<endl;
	cout<<"DA = "<<da<<endl;
	cout<<"Income tax = "<<tax<<endl;
	return 0;	
}
