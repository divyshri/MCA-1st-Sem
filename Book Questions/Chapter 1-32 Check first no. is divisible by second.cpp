#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"Enter first number"<<endl;
	cin>>x;
	cout<<"Enter second number "<<endl;
	cin>>y;
	if(x%y==0)
		cout<<"Entered number : "<<x<<" is divisible by : "<<y<<endl;
	else
		cout<<"Entered number : "<<x<<" is not divisible by : "<<y<<endl;
	return 0;
}
