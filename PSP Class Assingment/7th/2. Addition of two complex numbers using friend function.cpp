/*
Write a Program for addition of two complex numbers using friend function 
(Use constructor to initialize data members of complex class)
*/
#include<iostream>
using namespace std;
class Complex
{
	public:
		int a,b;
	public:
		friend Complex add(Complex*,Complex*);			//Declaration of the friend function
		Complex()										//Constructor
		{
			a=b=0;										//Default initialization in constructor
		}
		void get_data()
		{
			cout<<"Enter real part"<<endl;
			cin>>a;
			cout<<"Enter imaginary part"<<endl;
			cin>>b;
		}
		void print_data()
		{
			cout<<"Complex Number is = "<<a<<" + "<<b<<"i"<<endl;
		}	
};
Complex add(Complex *x,Complex *y)						//Friend function definition
{
	Complex temp;
	temp.a= x->a + y->a;
	temp.b= x->b + y->b;
	return temp;										//Returning class object
}
int main()
{
	Complex c1,c2,c3;
	cout<<"Enter values of first complex number"<<endl;
	c1.get_data();
	cout<<"Enter values of second complex number"<<endl;
	c2.get_data();
	c3=add(&c1,&c2);									//Calling function to add data of c1 and c2 and store it in c3
	c3.print_data();
	return 0;
	
}
