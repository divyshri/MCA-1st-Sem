#include<iostream>
using namespace std;
int main()
{
	double amt,dis;
	cout<<"Enter sales amout to calculate discount "<<endl;
	cin>>amt;
	if(amt<=5000)
	{
		dis=amt*.05;
		cout<<"Calculated discount on amount "<<amt<<" is : "<<dis<<endl;
	}
	else
	{
		dis=amt*.10;
		cout<<"Calculated discount on amount "<<amt<<" is : "<<dis<<endl;	
	} 
		
}
