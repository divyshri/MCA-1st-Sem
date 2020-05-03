#include<iostream>
using namespace std;
int main()
{
	char str[100];
	cout<<"Enter String"<<endl;
	gets(str);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a')
			str[i]=='d';
		else if(str[i]=='A')
			str[i]='D';
	}
	cout<<"The new string is "<<endl<<str<<endl;
	return 0;
}
