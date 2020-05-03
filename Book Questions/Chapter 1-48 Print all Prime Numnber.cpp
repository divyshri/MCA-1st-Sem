#include<iostream>
using namespace std;
int main()
{
	int num1,num2,temp,count=0;
	bool flag=false;
	cout<<"To print all the prime number within the given range"<<endl;
	cout<<"Enter starting number"<<endl;
	cin>>num1;
	cout<<"Enter ending number"<<endl;
	cin>>num2;
	for(int i=num1;i<num2;i++)
	{
		flag=false;
		for(int j=2;j<i;j++)
		{
			//cout<<"for j = "<<j<<endl;
			if(i%j==0)
				flag=true;;		
		}
		if(flag==false)
			cout<<"  "<<i<<"  ";	
	}
	
}
