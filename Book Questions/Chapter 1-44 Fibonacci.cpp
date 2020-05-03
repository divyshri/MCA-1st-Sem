#include<iostream>
using namespace std;
int main()
{
	int i=0,temp,sum=0,num,p1=0,p2=1;
	cout<<"Enter the value upto which you want the fibonacci series";
	cin>>num;
	while(i<num)
	{
		cout<<"  "<<p1<<"  ";
		temp=p2;
		p2=p1+p2;
		p1=temp;
		i++;
	}
	return 0;
}
