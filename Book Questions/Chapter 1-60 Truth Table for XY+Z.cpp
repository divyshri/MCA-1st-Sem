#include<iostream>
using namespace std;
int main()
{
	int x,y,z;
	cout<<"Truth table for XY + Z is as follows "<<endl<<endl;
	cout<<"X\tY\tZ\tXY\tXY+Z"<<endl;
	for(int x=0;x<=1;x++)
		for(int y=0;y<=1;y++)
			for(int z=0;z<=1;z++)
		cout<<x<<"\t"<<y<<"\t"<<z<<"\t"<<(x&&y)<<"\t  "<<((x&&y)||z)<<endl;
	return 0;
}
