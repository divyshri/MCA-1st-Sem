
//Program to demonstrate the fibonacci series

#include<iostream>
using namespace std;
int main()
{
	int num,t1=0,t2=1,nterm;			//intitializing the first term 0 and second term to 1
	cout<<"Enter the number upto which you want to display fibonacci series";
	cin>>num;
	cout<<"Series is "<<endl;
	for(int i=1;i<=num;i++)				//loop declaration to calculate the series
	{
		cout<<t1<<"\t";					
		nterm=t1+t2;					//adding the last and second last term of the series
		t1=t2;							//addition the last and second last term of the series becomes next term of series
		t2=nterm;						//storing the sum as the next term of the series
	}	
}
