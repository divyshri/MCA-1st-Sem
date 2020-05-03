#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float p,r,t,amt=0;
	cout<<"Enter principle amount "<<endl;
	cin>>p;
	cout<<"Enter rate per annum "<<endl;
	cin>>r;
	cout<<"Enter time period given"<<endl;
	cin>>t;
	amt=p*pow((1+r/100),t)-p;
	cout<<"Calculated Compound Interest is : "<<amt<<endl;
	return 0;
}
