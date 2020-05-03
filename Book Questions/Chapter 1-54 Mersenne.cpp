#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double num,temp;
	cout<<"Enter number upto which you want to print mersenne number"<<endl;
	cin>>num;
	for(int i=1;i<=num;i++)
	{
		temp=(pow(2,i)-1);
		cout<<"  "<<temp<<"  ";
	}
}
