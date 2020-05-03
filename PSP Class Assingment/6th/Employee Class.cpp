/*

Program To Implement Employee Class

*/

#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class Employee
{
	public:
		int emp_number,basic_sal, allowance,it, net_salary,gross_sal;
		char emp_name[50];
	public:
		void read()
		{
			cout<<"Enter employee Number"<<endl;
			cin>>emp_number;
			cout<<"Enter employee name"<<endl;
			cin>>emp_name;
			cout<<"Enter basic Salary of the employee"<<endl;
			cin>>basic_sal;
		}
		void calculate()
		{
			allowance = (123 * basic_sal) /100;
			gross_sal = basic_sal + allowance;
			it = (30 * gross_sal)/100;
			net_salary = basic_sal + allowance - it;			
		}
		void display()
		{
			cout<<"Employee number is : "<<emp_number<<endl;
			cout<<"Employee name is : "<<emp_name<<endl;
			cout<<"Allowance = "<<allowance<<endl;
			cout<<"Gross Salary = "<<gross_sal<<endl;
			cout<<"Income Tax = "<<it<<endl;
			cout<<"Net salary = "<<net_salary<<endl;
		}
};
int main()
{
	Employee e;
	e.read();
	e.calculate();
	e.display();
	return 0;
}
