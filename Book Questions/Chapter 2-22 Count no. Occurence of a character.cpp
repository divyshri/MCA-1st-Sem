#include<iostream>
using namespace std;
int main()
{
	double count=0;
	char str[100],check;
	cout<<"Enter String"<<endl;
	gets(str);
	cout<<"Enter character to check its no. of occurence"<<endl;
	cin>>check;
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==check)
			count++;
	}
	cout<<"The character '"<<check<<"'occured "<<count<<" times."<<endl;
	return 0;
}
