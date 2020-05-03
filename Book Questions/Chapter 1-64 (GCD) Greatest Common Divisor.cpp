#include<iostream>
using namespace std;
int main()
{
	int num1,num2,temp,lcd=1,max=1;
	cout<<"Enter any two positive integer to find Least Common Divisor"<<endl;
	cin>>num1>>num2;
	if(num1<num2)
		temp=num2;
	else
		temp=num1;
	for(int i=2;i<=temp;i++)
	{
		if(num1%i==0 && num2%i==0){
			lcd=i;
		if(max<lcd)
			max=lcd;
		}
	}
	cout<<"Least Common Divisor is = "<<max<<endl;
}
