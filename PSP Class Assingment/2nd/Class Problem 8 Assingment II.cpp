#include<iostream>
using namespace std;
int main()
{
	int x,y,z;
	cout<<"Enter first angle of the triangle"<<endl;
	cin>>x;
	cout<<"Enter second angle of the triangle"<<endl;
	cin>>y;
	cout<<"Enter third angle of the triangle"<<endl;
	cin>>z;
	if((x+y+z)==180)
		cout<<"It is a valid triangle, sum of all the angles is 180"<<endl;
	else
		cout<<"It is not a valid triangle, sum of all the angles is not 180"<<endl;
}
