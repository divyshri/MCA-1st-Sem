#include<iostream>
using namespace std;
class Point
{
	public:
		int x,y;
	public:
		void read();
		void read(int);
		void read(int,int);
		void display();
};
void Point::display()
{
	cout<<endl<<"("<<x<<","<<y<<")"<<endl;
}
void Point::read()
{
	cout<<"Read Function Without Arguments"<<endl;
	cout<<"Enter cordinate of x"<<endl;
	cin>>x;
	cout<<"Enter cordinate of y"<<endl;
	cin>>y;
}
void Point::read(int z)
{
	cout<<"Read Function With One Arguments"<<endl;
	x=y=z;
}
void Point::read(int a, int b)
{
	cout<<"Read function with two arguments"<<endl;
	x=a;
	y=b;
}
int main()
{
	Point P1,P2,P3;
	P1.read();
	P2.read(100);
	P3.read(50,60);
	P1.display();
	P2.display();	
	P3.display();
	return 0;
}
