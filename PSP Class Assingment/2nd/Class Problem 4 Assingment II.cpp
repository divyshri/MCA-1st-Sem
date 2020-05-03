#include<iostream>
using namespace std;
int main()
{
	int num,i=5,temp=0,x=10000;
	cout<<"Enter any five digit number "<<endl;
	cin>>num;
	while(i>0)
	{
		if((num/x)!=9)
			temp=temp+(((num/x)+1)*x);
		num=num%x;
		x=x/10;
		i--;	
	}
	cout<<"Number is  = "<<temp;
}
