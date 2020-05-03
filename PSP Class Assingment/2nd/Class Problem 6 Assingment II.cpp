
//Program to find the reverse of a five digit number

#include<iostream>
using namespace std;
int main()
{
	int num,a,temp=0;
	cout<<"Enter any number to reverse its digit "<<endl;
	cin>>num;
	while(num>0)
	{
		a=num%10;	
		temp=(temp*10)+a;
		num=num/10;
	}
	cout<<"num = "<<temp<<endl;
}
