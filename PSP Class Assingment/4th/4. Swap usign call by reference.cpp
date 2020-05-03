#include<iostream>
using namespace std;
void swap(double *x, double *y)
{
	double temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int main()
{
	double a,b;
	cout<<"Enter value of a : ";
	cin>>a;
	cout<<"Enter value of b : ";
	cin>>b;
	cout<<"Value of a and b before swapping \t a = "<<a<<" \t b = "<<b<<endl<<endl;
	swap(&a,&b);
	cout<<"Value of a and b after swapping \t a = "<<a<<" \t b = "<<b<<endl;
	return 0;	
}
