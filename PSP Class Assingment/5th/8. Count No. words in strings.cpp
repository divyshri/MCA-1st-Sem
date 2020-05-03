#include<iostream>
using namespace std;
int main()
{
	char str[100];
	int i,count=0;
	cout<<"Enter any string to count its words"<<endl;
	gets(str);
	for(i=0;str[i]!='\0';i++)
		{
			if(str[i]==' ')
				count++;
		}
	cout<<"Number of words in the given string is : "<<count+1<<endl;
	cout<<"Number of characters in the given string is : "<<i+1<<endl;
	return 0;
}
