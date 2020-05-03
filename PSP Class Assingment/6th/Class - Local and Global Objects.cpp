#include<iostream>
using namespace std;
void demo();
class Point
{
	public:
		int x,y;
	public:
		void read();
		void display();
}global_p;
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
	Point local_p;
	cout<<"Read Using Local object : "<<endl;
	local_p.read();
	cout<<"Read Using Global object : "<<endl;
	global_p.read();
	cout<<"Display Using Local object : "<<endl;
	local_p.display();
	cout<<"Display Using Global object : "<<endl;
	global_p.display();	
	demo();
	return 0;
}
void demo()
{
	cout<<"Display Using Global object in outside main function : "<<endl;
	global_p.display();	
}
