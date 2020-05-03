#include<iostream>
using namespace std;
class Point
{
	public:
		int x,y;
	public:
		Point()
		{
			cout<<"Constructor is being called"<<endl<<endl;
		}
		void read();
		void display();
		~Point()
		{
			cout<<endl<<endl<<"Destructor is being called"<<endl;
		}
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
	P1.display();
	return 0;
}
