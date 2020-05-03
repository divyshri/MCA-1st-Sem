#include<iostream>
using namespace std;
int main()
{
	int sp,cp,value;
	cout<<"Enter cost price of the item "<<endl;
	cin>>cp;
	cout<<"Enter selling price of the item "<<endl;
	cin>>sp;
	if(sp>cp)
	{
		value=sp-cp;
		cout<<"The seller incurred profit of Rs. "<<(sp-cp)<<endl;
	}
	else
	{
		value=cp-sp;
		cout<<"The seller incurred loss of Rs. "<<(cp-sp)<<endl;
	}
}
