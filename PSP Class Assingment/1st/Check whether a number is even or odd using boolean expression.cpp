//program to check whether the entered number is even or odd
#include<iostream>
using namespace std;
int main()
{
	int num;
	bool check=false;    			//intialized a boolean variable to false state (for odd number)
	cout<<"Enter any number";
	cin>>num;
	if(num%2==0)					//checks for the even number
		check=true;					//if the number is even then change the boolean value
	if(check)
		cout<<"Entered number is an even number"<<endl;
	else
		cout<<"Entered number is an odd number"<<endl;
		return 0;
}
