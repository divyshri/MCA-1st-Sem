#include<iostream>
using namespace std;
int main()
{
	string str[5],temp;
	cout<<"Enter five string to sort"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter "<<i+1<<" string"<<endl;
		cin>>str[i];
	}
	for(int i=0;i<5;i++)
	{
		for(int j=i;j<5;j++)
		{
			if(str[i]>str[j])
			{
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;
			}
		}
	}
	cout<<"Sorted string is"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<str[i]<<endl;
	}
}
