#include<iostream>
using namespace std;
int main()
{
	int num,temp,sum=0,temp1;
	cout<<"Enter any number to check whether it is palindrome or not"<<endl;
	cin>>num;
	temp=num;
	while(num!=0)
	{
		temp1=num%10;
		sum=sum*10+temp1;
		num=num/10;
	}
	if(sum==temp)
		cout<<"Entered number is palindorme"<<endl;
	else
		cout<<"Entered number is not a palindrome"<<endl;
}
