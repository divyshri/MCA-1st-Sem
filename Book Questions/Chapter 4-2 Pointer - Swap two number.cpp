#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}
int main()
{
	int x,y;
	cout<<"Enter first number "<<endl;
	cin>>x;
	cout<<"Enter second number "<<endl;
	cin>>y;
	swap(x,y);
	cout<<endl<<endl<<"After Swapping"<<endl<<endl;
	cout<<endl<<"First Number is "<<x<<endl;
	cout<<endl<<"Second number is "<<y<<endl;
	return 0;
}
