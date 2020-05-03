
//Program to check that the entered no. is prime no. or not

#include<iostream>
using namespace std;
int main()
{
	int num;
	bool check=true;			//Initializing a boolean variable to true for prime no.
	cout<<"Enter any number to check either it is prime no. or not";
	cin>>num;
	for (int i=2;i<num;i++)		//for loop to divide the entered no. from 2 to the number 1 less than the number
	{
		if(num%i==0)			//if the number divides with any of these no. in between
		check=false;			//set the boolean value to false state
	}
	if(check==true)				//prime number if the boolean variale is in true state
		cout<<endl<<num<<" is a prime number"<<endl;
	else						//not a prime number if the boolean variable is in the false state
		cout<<endl<<num<<" is not a prime number"<<endl;
}
