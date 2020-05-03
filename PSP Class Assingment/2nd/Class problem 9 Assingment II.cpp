#include<iostream>
using namespace std;
int main()
{
	int x1,x2,x3,y1,y2,y3,check;
	cout<<"Enter first point as (x1,y1)"<<endl;
	cin>>x1>>y1;										//reading first cordinate as (x1,y1)
	cout<<"Enter second point as (x2,y2)"<<endl;
	cin>>x2>>y2;										//reading first cordinate as (x1,y1)
	cout<<"Enter third point as (x3,y3)"<<endl;
	cin>>x3>>y3;										//reading first cordinate as (x1,y1)
	check = (x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2));		//Checking collinear condition for threee points
	if(check==0)										//if value is 0 then collinear
		cout<<"The given points are collinear"<<endl;
	else
		cout<<"The given points are not collinear"<<endl;
	return 0;
}
