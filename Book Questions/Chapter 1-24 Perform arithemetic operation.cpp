
//Program to demonstrate the simple calculator using switch statements

#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter two numbers to perform arithmetic operations";
	cin>>a>>b;
	cout<<"Enter your choice to perform the following operations"<<endl;
	cout<<"1 for addition"<<endl;	
	cout<<"2 for subtraction"<<endl;
	cout<<"3 for multiplication"<<endl;
	cout<<"4 for division"<<endl;
	int choice;
	cin>>choice;
	switch(choice)
	{
		case(1):					//case 1 for addition
			cout<<"Addition is : "<<(a+b)<<endl;
			break;
		case(2):					//case 2 for subtraction
			cout<<"Subtraction is : "<<(a-b)<<endl;
			break;
		case(3):					//case 3 for multiplication
			cout<<"Multiplication is : "<<(a*b)<<endl;
			break;	
		case(4):					//case 4 for division
			cout<<"Division is : "<<(a/b)<<endl;
			break;
		default:					//default case if the user entered wrong choice
			cout<<"Enter appropriate choice"<<endl;
			break;
			
	}
}
