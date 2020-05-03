#include<iostream>
using namespace std;
int main()
{
	double a,b,c,avg;
	char grade;
	cout<<"Enter marks of the First subject "<<endl;
	cin>>a;
	cout<<"Enter marks of the Second subject "<<endl;
	cin>>b;
	cout<<"Enter marks of the Third subject "<<endl;
	cin>>c;
	avg=(a+b+c)/3;
	if (avg>=90)
		grade='A';
	else if(avg>=75 && avg<90)
		grade='B';
	else if (avg>=60 && avg<75)
		grade='C';
	else if (avg >=50 && avg<60)
		grade='D';
	else
		grade='F';
	cout<<"Average marks is : "<<avg<<" and alloted grade is : "<<grade<<endl;
	return 0;
		
}
