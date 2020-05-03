#include<iostream>
using namespace std;
int sum=1;
int fact(int num)
{
	if(num>=1){
			sum=sum*num;
			fact(num-1);}
	else
		return sum;
}
int main()
{
	int num;
	cout<<"Enter value to calculate its factorial "<<endl;
	cin>>num;
	fact(num);
	cout<<"Calculated value of the factorial is : "<<sum<<endl;
	return 0;	
}
