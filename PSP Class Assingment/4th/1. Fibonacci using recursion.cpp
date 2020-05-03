#include<iostream>
using namespace std;
int num,t1=0,t2=1,nterm,i=0;
void fib()
{
	if(i<num)
	{
	cout<<t1<<"   ";
	nterm=t1+t2;
	t1=t2;
	t2=nterm;
	i++;	
	fib();
	}
}
int main()
{
	cout<<"Enter the number upto which you want to display fibonacci series"<<endl;
	cin>>num;
	int ch;
	cout<<"Enter your choice to perform operation"<<endl;
	cout<<"1. Fibonacci series using iterative method"<<endl;
	cout<<"2. Fibonacci series using recursive method"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:
			{
				fib();
				break;			
			}
		case 2:
			{
				int i=0,temp,sum=0,p1=0,p2=1;
				while(i<num)
				{
					cout<<"  "<<p1<<"  ";
					temp=p2;
					p2=p1+p2;
					p1=temp;
					i++;
				}
				break;
			}
		default:
			cout<<"Invalid choice"<<endl;
	}
	
	return 0;
}
