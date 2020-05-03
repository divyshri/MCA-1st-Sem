#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char str[100];
	cout<<"Enter String"<<endl;
	gets(str);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
			str[i]=='\n';
	}
	cout<<"\nString in the new format is \n"<<str;
	return 0;
}
