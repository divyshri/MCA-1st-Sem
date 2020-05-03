#include<iostream>
using namespace std;
int ab_sum (int *x,int *y,int *z)
{
	int temp;
	temp = *x+*y+* z;
	return (temp);
}
int main()
{
	int a,b,c,sum;
	cout<<"Enter three numbers to calculate their sum "<<endl;
	cin>>a>>b>>c;
	sum = ab_sum(&a,&b,&c);
	cout<<"Sum of the two values is : "<<sum<<endl;
}
