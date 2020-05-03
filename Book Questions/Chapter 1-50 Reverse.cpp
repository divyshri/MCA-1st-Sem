#include<iostream>
using namespace std;
int main()
{
	int temp,num,reverse=0,x;
	cout<<"Enter any number to reverse"<<endl;
	cin>>num;
	temp=num;
	while(num>0)
	{
		x=num%10;
		reverse = reverse*10 + x;
		num=num/10;
	}
	cout<<"reverse = "<<reverse<<endl;
}
