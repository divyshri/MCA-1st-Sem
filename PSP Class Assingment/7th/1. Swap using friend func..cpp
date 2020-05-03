/*
Write a program to swap the values of two integer members of diffeerbt classes using friend functions.
*/
#include<iostream>
using namespace std;
class B;							//Decleration of the second class
class A
{
	public:
		int a;
	public:
		friend void swap(A*,B*);	// declaration of the friend function using two class objects as parameters
		void get_data(int a)
		{
			this->a=a;				//accesing the member variable of the class using this pointer
		}
		void print_data()
		{
			cout<<"A = "<<a<<endl;
		}
};
class B								//Definition of the second class
{
	public:
		int b;
	public:
		friend void swap(A*,B*);	// declaration of the friend function using two class objects as parameters		
		void get_data(int b)
		{
			this->b=b;				//accesing the member variable of the class using this pointer
		}
		void print_data()
		{
			cout<<"B = "<<b<<endl;
		}
		
};
void swap(A *x, B *y)				//definition of the friend function
{
	int temp;
	temp = x->a;					//accesing the member variable of class A and storing it in temporary variable
	x->a=y->b;						//accesing the member variable of class B and storing it in Variable of class A
	y->b=temp;						//storing the temporary variable in the member variable of the second class
}
int main()
{
	A a;
	B b;
	a.get_data(10);					//storing data in the member variable of the first class
	b.get_data(20);					//storing data in the member variable of the second class
	cout<<"Values before swapping "<<endl;
	a.print_data();
	b.print_data();
	swap(&a,&b);					//Calling swap function by using two object pointers as parameter
	cout<<"Values after swapping "<<endl;
	a.print_data();
	b.print_data();
	return 0;
}
