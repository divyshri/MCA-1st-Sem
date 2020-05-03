#include<iostream>
using namespace std;
int main()
{
	int num,bin[100],i=0;
	cout<<"Enter any decimal number to convert it into binary "<<endl;
	cin>>num;
	while(num>0)
	{
		if(num%2==0)
			bin[i]=0;
		else
			bin[i]=1;
		num=num/2;
		i++;
	}
	for(int x=i-1;x>=0;x--)
	{
		cout<<"  "<<bin[x]<<"  ";
	}
	return 0;
}
