#include<iostream>
using namespace std;
int main()
{
	double c,f;
	char ch;
	START:
	cout<<"\n\n\n"<<"Enter F to Farenheit to Celcius"<<endl<<endl<<"Enter C to convert Celcius to Farenhiet"<<endl;
	cin>>ch;
	if((ch=='F')||(ch=='f'))
	{
		cout<<"Enter temperature in Farenheit"<<endl;
		cin>>f;
		c=(f-32)*.5555;
		cout<<"Temperature in Celcius will be : "<<c<<endl;
	}
	else if((ch=='c')||(ch=='C'))
	{
		cout<<"Enter temperature in Celcius"<<endl;
		cin>>c;
		f=c*.8+32;
		cout<<"Temperature in Farenheit will be : "<<f<<endl;
	}
	else
	{
		cout<<"Incorrect choice, Please try Again"<<endl;
		goto START;
	}
}
