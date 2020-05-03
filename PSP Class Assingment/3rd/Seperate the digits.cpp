#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int temp,num;
	double dig,x=10;
	cout<<"Enter number of digits in the number"<<endl;
	cin>>dig;
	cout<<"Enter any "<<dig<<" digit number"<<endl;
	cin>>num;
	x=pow(x,dig-1);
	for(int i=0;i<dig;i++)
	{
		temp=num/x;
		cout<<temp<<"  ";
		num=num%(int)x;
		x=x/10;
	}
	return 0;
}
