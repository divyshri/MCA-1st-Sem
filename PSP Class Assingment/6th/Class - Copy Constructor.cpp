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
		Point(const Point &p2)
		{
			x=p2.x;
			y=p2.y;
		}
		void read();
		void display();
};
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
	Point P1;
	P1.read();
	Point P2=P1;
	P1.display();
	P2.display();	
	return 0;
}
