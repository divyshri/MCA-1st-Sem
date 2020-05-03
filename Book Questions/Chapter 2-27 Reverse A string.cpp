#include<iostream>
using namespace std;
int main()
{
	char str1[100],str2[100];
	int i,k;
	cout<<"Enter string to reverse"<<endl;
	gets(str1);
	for(i=0;str1[i]!='\0';i++){
	}
	for(k=0;str1[k]!='\0';k++)
	{
		str2[i]=str1[k];
		i--;
	}
	cout<<"reversed string is "<<endl<<str2<<endl;
	return 0;
}
