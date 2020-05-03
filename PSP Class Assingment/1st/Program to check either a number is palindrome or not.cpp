//program to check either a number is palindrome or not
#include<iostream>
using namespace std;
int main()
{
	int temp,temp1,sum=0,num;
	cout<<"Enter any number to check it is either palindrome or not"<<endl;
	cin>>num;
	temp=num;
	while(num!=0)
	{
		temp1=num%10;
		sum=sum*10+temp1;
		num=num/10;
	}
	if(sum==temp)
		cout<<endl<<"The number is plaindrome";
	else
		cout<<endl<<"The entered number is not palindrome";		
	return 0;	
}
