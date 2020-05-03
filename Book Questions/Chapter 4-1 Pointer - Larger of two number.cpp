#include<iostream>
using namespace std;
int* big(int &x,int &y)
{
	if(x>y)
		return &x;
	else
		return &y;
}
int main()
{
	int a,b,*c;
	cout<<"Enter two number to find its maximum"<<endl;
	cin>>a>>b;
	c=big(a,b);
	cout<<"The largest number is "<<*c<<endl;
	return 0;
	
}
