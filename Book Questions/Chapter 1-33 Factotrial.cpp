#include<iostream>
using namespace std;
int main()
{
	int num,fact=1;
	cout<<"Enter any number to calculate its factorial "<<endl;
	cin>>num;
	while (num>0)
	{
		fact=fact*num;
		num--;
	}
	cout<<"Factorial of the given number is "<<fact<<endl;
	
}
