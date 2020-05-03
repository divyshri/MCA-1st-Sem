//Program to check whether the Entered year is leap year or not
#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter any year to check whether it leap year or not";
	cin>>year;				
	if(year%400==0)				//check condition for the leap year of centuries
		cout<<"Entered year is an leap year";
	else if(year%100==0)		//not every century year is leap year
		cout<<"Entered year is not an leap year";
	else if(year%4==0)			//checks for the leap year
		cout<<"Entered year is an leap year";
	else						//if all the above conditions are prooved to be false
		cout<<"Entered year is not an leap year";
	return 0;
}
