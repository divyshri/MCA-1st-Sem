#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter any character to change their case"<<endl;
	cin>>ch;
	if(ch>=65 && ch<=90){
		ch=ch+32;
		cout<<"Character after changing the case : "<<ch<<endl;
	}
	else if(ch>=95 && ch<=122){
		ch=ch-32;
		cout<<"Character after changing the case : "<<ch<<endl;
	}
	else
		cout<<"Not a valid character"<<endl;
	return 0;
}
