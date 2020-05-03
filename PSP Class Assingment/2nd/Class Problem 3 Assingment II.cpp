
/* If the total selling price of 15 items and the total profit earned on them is 
input through the keyboard, write a program to find the cost price of one item */

#include<iostream>
using namespace std;
int main()
{
	int sp,p,cp;
	cout<<"Enter selling price of 15 items"<<endl;
	cin>>sp;
	cout<<"Enter profit earned on 15 items"<<endl;
	cin>>p;
	cp=(sp-p)/15;
	cout<<"Cost price of one item is : "<<cp;
	return 0;
}


