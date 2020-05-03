#include<iostream>
using namespace std;
class Point
{
	public:
		int x,y;
	public:
		Point()
		{
			cout<<"Constructor inside the class"<<endl;
		}
		Point(int , int);
		void read();
		void display();
};
Point::Point(int a,int b)
{
	cout<<"Constructor Outside the class"<<endl;
	x=a;
	y=b;
}
void Point::display()
{
	cout<<endl<<"("<<x<<","<<y<<")"<<endl;
}
void Point::read()
{
	cout<<"Enter cordinate of X"<<endl;
	cin>>x;
	cout<<"Enter Y"<<endl;
	cin>>y;
}
int main()
{
	Point P1,P2(10,20);
	P1.read();
	P1.display();
	P2.display();	
	return 0;
}
