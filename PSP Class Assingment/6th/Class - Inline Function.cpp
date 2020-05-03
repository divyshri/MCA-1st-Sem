#include<iostream>
using namespace std;
int check(int a)
{
	return!(a%2);
}
int main()
{
	if(check(10))
		cout<<"10 is even"<<endl;
	else if(check(11))
		cout<<"11 is even"<<endl;
	return 0;
}

