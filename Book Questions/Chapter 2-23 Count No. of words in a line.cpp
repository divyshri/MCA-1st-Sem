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
			while(str[i]==' ')
			{
				i++;
			}
	}
	cout<<"Number of words in the string is : "<<count+1<<endl;
	return 0;
}
