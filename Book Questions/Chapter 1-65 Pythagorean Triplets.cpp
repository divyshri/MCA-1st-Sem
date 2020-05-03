#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Pythogorean Triplets between 100-1000 are as follows"<<endl;
	cout<<"a\tb\tc"<<endl;
	for(a=1,b=0,c=1;c<1000;a+=2,b+=4,c+=4)
		cout<<a<<"\t"<<b<<"\t"<<c<<endl;
	return 0;
}
