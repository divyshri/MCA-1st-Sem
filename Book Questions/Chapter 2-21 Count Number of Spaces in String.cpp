#include<iostream>
using namespace std;
int main()
{
	double count=0;
	char str[100];
	cout<<"Enter String"<<endl;
	gets(str);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
			count++;
	}
	cout<<"Length of the string is : "<<count<<endl;
	return 0;
}
