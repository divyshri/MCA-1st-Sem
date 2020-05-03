
/*If a four digit number is input through the keyboard then
	write a program to obtain the sum of the first and last digit of this number*/


#include<iostream>
using namespace std;
int main()
{
	int num,thou;
	cout<<"Enter any four digit numbers"<<endl;
	cin>>num;
	thou=num/1000;
	num=num%10;
	cout<<endl<<"The sum of first and last digit is = "<<(thou+num)<<endl;
	return 0;
}
