#include<iostream>
using namespace std;
class Point
{
	public:
		int x,y;
	public:
		void read()
		{
			cout<<"Enter cordinate of X"<<endl;
			cin>>x;
			cout<<"Enter Y"<<endl;
			cin>>y;
		}
		void display()
		{
			cout<<endl<<"("<<x<<","<<y<<")"<<endl;
		}
};
int main()
{
	Point p;
	p.read();
	cout<<"Function called using object : "<<endl;
	p.display();
	cout<<"Member variables called using object"<<endl;
	cout<<"x = "<<p.x<<endl<<"y = "<<p.y<<endl;
	return 0;
}
