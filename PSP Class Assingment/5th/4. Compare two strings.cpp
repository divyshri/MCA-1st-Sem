#include<iostream>
using namespace std;
int main()
{
	char str1[100],str2[100];
	int flag=0,i,j;
	cout<<"Enter first string "<<endl;
	gets(str1);
	cout<<"Enter Second string "<<endl;
	gets(str2);
	for(i=0;str1[i]!='\0';i++);
	for(j=0;str2[i]!='\0';j++);
	if(i=j)
	{
		for(int i=0;i<j;i++)
		{
			if(str1[i]!=str2[i])
			{
				flag=1;
				break;
			}
		}
	}
	if(flag)
		cout<<"Given two strings are different"<<endl;
	else
		cout<<"Given two string are Same"<<endl;
	
}
