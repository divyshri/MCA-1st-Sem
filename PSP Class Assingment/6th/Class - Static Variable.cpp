#include<iostream>
using namespace std;
class Point
{
	public:
		static int count;
	public:
		Point()
		{
			count++;
		}
		
};
int Point::count =0;
int main()
{
	Point p;
	cout<<"Value of count at first object :"<<endl<<Point::count<<endl;
	Point s;
	cout<<"Value of count at Second object :"<<endl<<Point::count<<endl;
	return 0;
}

