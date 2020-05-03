#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[100],b[100],con[100],i,j;
	cout<<"Enter the first string"<<endl;
	gets(a);
	cout<<"Enter the second string"<<endl;
	gets(b);
	for(i=0;a[i]!='\0';i++)
		con[i]=a[i];
	for(j=0;b[j]!='\0';j++)
		con[i+j]=b[j];
		
	con[i+j]='\0';
	
	cout<<"Concatenate string is "<<endl<<con<<endl;
}
