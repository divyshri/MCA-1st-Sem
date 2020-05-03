
//Program to find the series upto a number entered from the user 

#include<iostream>
using namespace std;
int main()
{
	int n,i=1,temp=1,sum=0;
	cout<<"Enter the number upto which you want to print the sum";
	cin>>n;
	while(i<=n)					//loop to check condition less than or equal to one
	{
		temp=temp*i;			//calculation a valriable to display series
		cout<<temp<<"\t";
		sum=sum+temp;			//Celculation of the sum of the series
		i++;
	}
	cout<<endl<<"Sum upto to the number "<<n<<" is : "<<sum;
}
