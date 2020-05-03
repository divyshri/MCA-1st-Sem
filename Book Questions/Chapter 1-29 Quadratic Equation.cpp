#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double a,b,c,d,first,second,temp;
	cout<<"Enter co-efficient of a^2"<<endl;
	cin>>a;
	cout<<"Enter co-efficient of b"<<endl;
	cin>>b;
	cout<<"Enter co-efficient of c"<<endl;
	cin>>c;
	d=b*b-4*a*c;
	if(d==0)
	{
		first=-(b/a);
		second=c/a;
	}
	else
	{
		temp=sqrt(b*b-4*a*c);
		first=-b+temp/2*a;
		second=-b-temp/2*a;
	}
	cout<<"Roots of the given equation : "<<endl;
	cout<<"First = "<<first<<endl;
	cout<<"Second = "<<second<<endl;
	return 0;
}
