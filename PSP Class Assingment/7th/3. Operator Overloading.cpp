/*
Define a class String and overload == to compare to strings and + operator for concatenation of two strings
*/
#include<iostream>
#include<string.h>
using namespace std;
class Demo
{
	public:
		char str[100];
	public:
		friend Demo operator+(Demo,Demo);
		friend bool operator==(Demo,Demo);
		void get_data()
		{
			cout<<"Enter string"<<endl;
			gets(str);
		}	
		void display()
		{
			cout<<"Entered string is "<<endl<<str<<endl;
		}		
};
Demo operator+(Demo x, Demo y)
{
	Demo temp;
	strcpy(temp.str,x.str);
	strcat(temp.str,y.str);
	return temp;
}
bool operator==(Demo x,Demo y)
{
	return(strcmp(x.str,y.str)==0) ? true :false;
		
		
}
int main()
{
	Demo s1,s2,s3;
	int check;
	s1.get_data();
	s2.get_data();
	s3= s1+s2;
	s3.display();
	if(s1==s2)
		cout<<"Strings are same"<<endl;
	else
		cout<<"Strings are not same"<<endl;
	
}
