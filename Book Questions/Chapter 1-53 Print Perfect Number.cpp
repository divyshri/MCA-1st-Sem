#include<iostream>
using namespace std;
int main()
{
	int num,temp,sum=0;
	cout<<"Enter number upto which you want to generate perfect numbers "<<endl;
	cin>>num;
	temp=num;
	for(int i=1;i<num;i++)
	{
		if(num%i==0)
			sum=sum+i;
	}
	if(sum==temp)
		cout<<"Entered number is perfect number"<<endl;
	else
		cout<<"Entered number is not a perfect number"<<endl;
	return 0;
}
