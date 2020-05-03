#include<iostream>
using namespace std;
int main()
{
	int date;
	cout<<"Enter date"<<endl;
	cin>>date;
	if(date>=1 && date <=31)
		cout<<"Valid date"<<endl;
	else
		cout<<"Invalid date"<<endl;
	return 0;
}
