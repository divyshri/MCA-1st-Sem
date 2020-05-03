#include<iostream>
using namespace std;
int main()
{
	int n,i=1,sum=0;
	cout<<"Enter the number upto which you want to print the sum";
	cin>>n;
	while(i<=n)
	{
		sum+=i;
		i++;
	}
	cout<<"Sum upto to the number "<<n<<" is : "<<sum;
}
