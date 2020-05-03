#include<iostream>
using namespace std;
int main()
{
	int p,r,t;
	float si;
	cout<<"Enter principal amount "<<endl;
	cin>>p;
	cout<<"Enter rate per annum "<<endl;
	cin>>r;
	cout<<"Enter time in year "<<endl;
	cin>>t;
	si=(float)((p*r*t)/100);
	cout<<"Required Simple interest is = "<<si<<endl;
	return 0;
}
