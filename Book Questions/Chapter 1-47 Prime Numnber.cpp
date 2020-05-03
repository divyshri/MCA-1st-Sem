#include<iostream>
using namespace std;
int main()
{
	int num,temp;
	bool flag=false;
	cout<<"Enter any number to check whether it is prime or not"<<endl;
	cin>>num;
	for(int i=2;i<num;i++)
	{
		if(num%i==0)
			flag=true;
	}
	if(flag==false)
		cout<<"Entered number is a prime number"<<endl;
	else
		cout<<"Entered number is not a prime number"<<endl;
}
