#include<iostream>
using namespace std;
int main()
{
	int day,year,week;
	
	cout<<"Enter number of days"<<endl;
	cin>>day;
	int temp=day;
	year=day/365;
	day=day%365;
	week=day/7;
	day=day%7;
	cout<<"Number of yers, weeks,and days for : "<<temp<<" days"<<endl;
	cout<<"Years :\t"<<year<<endl;
	cout<<"Weeks :\t"<<week<<endl;
	cout<<"Days :\t"<<day<<endl;
	return 0;
}
