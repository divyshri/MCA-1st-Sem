#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int num,x,y,sum=0,temp;
	cout<<"Enter a number to check whether it is a armstrong number or not"<<endl;
	cin>>num;
	temp=num;
	while(num!=0)
	{
		x=num%10;
		cout<<"x = "<<x<<endl;
		sum=sum+x*x*x;
		cout<<"sum = "<<sum<<endl;
		num=num/10;
		cout<<"num = "<<num<<endl;
	}
	cout<<"Sum = "<<sum<<endl;
}
