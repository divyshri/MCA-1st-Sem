
//Program to calculate factorial of the given number

#include<iostream>
using namespace std;
int main()
{
	int num,fact=1;
	cout<<"Enter any number to calculate factorial ";
	cin>>num;
	do{							
		fact=fact*num;			//multiplying previous value of factorial with curent value of number
		num--;					//decrement number by 1
	}while(num>=1);				//condition to check whether the number is greater than or equal to 1
	cout<<"factorial of the given number is "<<fact;
}
