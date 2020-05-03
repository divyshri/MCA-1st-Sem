#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int demo,num,temp=0;
	cout<<"Enter any to check whether it is armtrong number or not"<<endl;
	cin>>num;
	int a=num;
	while(num>0)
	{
		demo = num%10;
		temp=temp+pow(demo,3);
		num=num/10;
	}
	if(a==temp)
	cout<<a<<" is armstrong number"<<endl;
	else
	cout<<a<<" is not a armstrong number"<<endl;
}
