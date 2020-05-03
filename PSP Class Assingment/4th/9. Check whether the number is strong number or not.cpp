#include<iostream>
using namespace std;
int sum1=1;
int fact(int x)
{
	if(x>=1){
		sum1=sum1*x;
		fact(x-1);}
	else
	return sum1;
}
int main()
{
	int num,sum=0,temp,temp1,x=100;
	cout<<"Enter number to check whether its a strong number or not"<<endl;
	cin>>num;
	temp1=num;
	while(num>0)
	{
		temp=num/x;
		num=num%x;
		sum1=1;
		sum=sum+fact(temp);
		x=x/10;
	}
	if(temp1==sum)
		cout<<"Entered number is a strong number "<<temp1<<endl;
	else
		cout<<"Entered number is not a strong number "<<temp1<<endl;
	
}
