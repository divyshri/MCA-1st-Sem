#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter any character "<<endl;
	cin>>ch;
	if (ch>='a'&& ch<='z') 
		cout<<"Entered character is in small letters "<<endl;
	else if (ch>='A'&& ch<='Z') 
		cout<<"Entered character is in capital Letters"<<endl;
	else if (ch>='0'&& ch<='9') 
		cout<<"Entered character is number"<<endl;
	else
		cout<<"Entered character is special charater"<<endl;
	return 0;
}
