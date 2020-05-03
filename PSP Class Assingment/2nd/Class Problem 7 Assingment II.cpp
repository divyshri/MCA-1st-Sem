#include<iostream>
using namespace std;
int main()
{
	int l,b,area,peri;
	cout<<"Enter length of the rectangle"<<endl;
	cin>>l;
	cout<<"Enter breadth of the rectangle"<<endl;
	cin>>b;
	area=l*b;
	peri=2*(l+b);
	if(area>peri)
		cout<<"The area of the given rectangle is greater than its perimeter"<<endl;
	else
		cout<<"The perimeter of the given rectangle is greater than its area"<<endl;
	return 0;
}
