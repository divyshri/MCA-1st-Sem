#include<iostream>
using namespace std;
int main()
{
	int num,temp;
	cout<<"Enter any number to determine its factors "<<endl;
	cin>>num;
	cout<<"Factors of the number are "<<endl;
	for(int i=2;i<num;i++)
	{
		if(num%i==0)
			cout<<"  "<<i<<"  ";
	}
	return 0;
}
