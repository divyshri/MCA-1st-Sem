#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char str[100];
	int count_upper=0,count_lower=0,count_digit=0,count_special=0;
	cout<<"Enter String"<<endl;
	gets(str);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]>=32 && str[i]<=47)
			count_special++;
		else if(str[i]>=48 && str[i]<=57)
			count_digit++;
		else if (str[i]>=65 && str[i]<=90)
			count_upper++;
		else if (str[i]>=97 && str[i]<=122)
			count_lower++;
	}
	cout<<"\n No. of Upper case characters are : "<<count_upper<<endl;
	cout<<"\n No. of Lower case characters are : "<<count_lower<<endl;
	cout<<"\n No. of Digits are : "<<count_digit<<endl;
	cout<<"\n No. of Special characters are : "<<count_special<<endl;
	return 0;
}
