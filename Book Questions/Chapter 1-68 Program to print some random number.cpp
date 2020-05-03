#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	cout<<"Random Numbers are : "<<endl;
	for(int i=0;i<20;i++)
		cout<<rand()%100<<endl;
	return 0;
}
