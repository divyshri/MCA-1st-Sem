#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double n,sqr,cube;
	cout<<"Enter number to find its square and cube "<<endl;
	cin>>n;
	sqr=pow(n,2);
	cube=pow(n,3);
	cout<<"Value of n to the power 1 n^1 : "<<n<<endl;
	cout<<"Value of n to the power 2 n^2 : "<<sqr<<endl;
	cout<<"Value of n to the power 3 n^3 : "<<cube<<endl;
	return 0;
}
