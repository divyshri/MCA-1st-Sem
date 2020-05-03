#include<iostream>
using namespace std;
int main()
{
	int cp,sp;
	cout<<"Enter Cost Price"<<endl;
	cin>>cp;
	cout<<"Enter Selling Price"<<endl;
	cin>>sp;
	if(sp>cp)
		cout<<"Profit on the given Selling Price is : "<<(sp-cp)<<endl;
	else if(sp=cp)
		cout<<"Neither profit nor loss because profit and loss are same"<<endl;
	else
		cout<<"Loss on the gin Selling Price is : "<<(cp-sp)<<endl;
	return 0;
}
