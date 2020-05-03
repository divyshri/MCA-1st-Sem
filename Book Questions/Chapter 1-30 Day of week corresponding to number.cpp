#include<iostream>
using namespace std;
int main()
{
	int choice;
	DEMO:
	cout<<"Enter a day-number and print corresponding day of the week"<<endl;
	cin>>choice;
	switch(choice)
	{
		case(1):cout<<"1 - Monday "<<endl;
				break;
		case(2):cout<<"2 - Tuesday"<<endl;
				break;
		case(3):cout<<"3 - Wednesday"<<endl;
				break;
		case(4):cout<<"4 - Thursdady"<<endl;
				break;
		case(5):cout<<"5 - Friday"<<endl;
				break;
		case(6):cout<<"6 - Saturday"<<endl;
				break;
		case(7):cout<<"7 - Sunday"<<endl;
				break;
		default:cout<<endl<<"Incorrect choice, please try again"<<endl;
				goto DEMO;
	}
	return 0;
}
