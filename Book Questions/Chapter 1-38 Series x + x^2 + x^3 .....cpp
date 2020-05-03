#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int x,num,sum=0;
	cout<<"Enter the no. of terms upto which you want sum "<<endl;
	cin>>num;
	cout<<"Enter the value of x "<<endl;
	cin>>x;
	for(int i=1;i<=num;i++)
	{
		sum = sum + pow(x,i);
	}
	cout<<"Sum of the series is "<<sum<<endl;
}
