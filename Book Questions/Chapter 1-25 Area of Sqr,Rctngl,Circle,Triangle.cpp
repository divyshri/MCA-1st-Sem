#include<iostream>
using namespace std;
int main()
{
	int choice,area;
	DEMO: cout<<"Enter choice to perform following action :"<<endl;
	cout<<"1. To claculate Area of a Sqaure"<<endl;
	cout<<"2. To Calculate Area of a rectangle"<<endl;
	cout<<"3. To calculate Area of a Circle"<<endl;
	cout<<"4. To calculate Area of a Triangle"<<endl;
	cin>>choice;
	switch(choice)
	{
		case(1): 
		{
			int a;
			cout<<"Enter side of the square "<<endl;
			cin>>a;
			area=a*a;
			cout<<"Area of the sqaure is : "<<area<<endl;			
			break;
		}
		case(2): 
		{
			int a,b;
			cout<<"Enter length and breadth of the rectangle "<<endl;
			cin>>a>>b;
			cout<<"Area of the rectangle is "<<a*b<<endl;
			break;
		}
		case(3):
		{
			int r;
			cout<<"Enter radius of the circle"<<endl;
			cin>>r;
			cout<<"Area of the circle is : "<<3.14*(r*r)<<endl;
			break;
		}
		case(4):
		{
			int b,h;
			cout<<"Enter base and height of the triangle"<<endl;
			cin>>b>>h;
			cout<<"Area of the triangle is : "<<.5*(h*b)<<endl;
			break;
		}
		default:
		{
			cout<<"Incorrect choice please try again"<<endl;
			goto DEMO;
		}
	}
}
