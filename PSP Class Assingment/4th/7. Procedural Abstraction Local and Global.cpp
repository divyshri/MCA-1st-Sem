#include <iostream>
using namespace std;
int glbl = 10;
void func1(){
	glbl = 20;
	cout<<"Value of global variable in User Defined Function "<< glbl << endl;
}

int main()
{
	func1();
	glbl = 30;
	cout<<"Value of global variable in Main Function "<< glbl << endl;
	return 0;
}
