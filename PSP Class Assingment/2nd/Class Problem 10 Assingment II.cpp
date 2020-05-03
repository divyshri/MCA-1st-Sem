#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a=0,r=5,x,y;
	float d;
	cout<<"Enter the cordinates of point (x,y) "<<endl;
	cin>>x>>y;
	d=sqrt(pow((a-x),2)+pow((a-y),2));
	if(d>r)
		cout<<"The point is Outside the circle "<<endl;
	else if(d<r)
		cout<<"The point is inside the circle "<<endl;
	else
		cout<<"The point is on the circle "<<endl;
	return 0;
}
