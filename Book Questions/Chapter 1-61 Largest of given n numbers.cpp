#include<iostream>
using namespace std;
int main()
{
	int num,max=0;
	char ch;
	do
	{
		cout<<"Enter any integer"<<endl;
		cin>>num;
		if(max<num)
			max=num;
		cout<<"If you want to continue press 'Y'"<<endl;
		cin>>ch;
	}while(ch=='Y'|| ch=='y');
	cout<<"Maximum number of the input numbers is "<<max<<endl;
	return 0;
}
