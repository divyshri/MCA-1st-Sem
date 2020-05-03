#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter three numbers to compare"<<endl;
	cin>>a>>b>>c;
	if(a>=b && a>=c)
	{
		if(b>=c)
			cout<<"Number in ascending order is :"<<endl<<"a = "<<a<<"\tb = "<<b<<"\tc = "<<c<<endl;
		else
			cout<<"Number in ascending order is :"<<endl<<"a = "<<a<<"\tb = "<<c<<"\tc = "<<b<<endl;
	}
	else if (b>=a && b>=c)
	{
		if(a>=c)
			cout<<"Number in ascending order is :"<<endl<<"a = "<<b<<"\tb = "<<a<<"\tc = "<<c<<endl;
		else
			cout<<"Number in ascending order is :"<<endl<<"a = "<<b<<"\tb = "<<c<<"\tc = "<<a<<endl;
	}
	else if (c>=a && c>=b)
	{
		if(b>=a)
			cout<<"Number in ascending order is :"<<endl<<"a = "<<c<<"\tb = "<<b<<"\tc = "<<a<<endl;
		else
			cout<<"Number in ascending order is :"<<endl<<"a = "<<c<<"\tb = "<<a<<"\tc = "<<b<<endl;
	}
	return 0;
}
