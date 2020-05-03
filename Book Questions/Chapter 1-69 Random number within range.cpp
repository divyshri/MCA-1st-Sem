#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int max,min,num;
	cout<<"Enter maximum range"<<endl;
	cin>>max;
	cout<<"Enter minimum range"<<endl;
	cin>>min;
	for(int i=0;i<3;i++)
	{
		num=rand()% (max-min)+min;
		cout<<num<<endl;
	}
	return 0;
}
