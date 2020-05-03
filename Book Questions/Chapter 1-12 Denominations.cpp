#include<iostream>
using namespace std;
int main()
{
	int amt,two_thou,five_hun,hun,fifty,twenty,ten=0,five,two,one=0;
	cout<<"Enter amount to find least denominations"<<endl;
	cin>>amt;
	int temp= amt;
	while(amt>0)
	{
		if(amt>=2000)
		{
			two_thou=amt/2000;
			amt=amt%2000;
		}
		else if(amt>=500)
		{
			five_hun=amt/500;
			amt=amt%500;
		}
		else if(amt>=100)
		{
			hun=amt/100;
			amt=amt%100;
		}
		else if(amt>=50)
		{
			fifty=amt/50;
			amt=amt%50;
		}
		else if(amt>=20)
		{
			twenty=amt/20;
			amt=amt%20;
		}
		else if(amt>=10)
		{
			ten=amt/10;
			amt=amt%10;
		}
		else if(amt>=5)
		{
			five=amt/5;
			amt=amt%5;
		}
		else if(amt>=2)
		{
			two=amt/2;
			amt=amt%2;
		}
		else if(amt=1)
		{
			one=1;
			break;
		}
		else 
			break;
	}
	cout<<"Minimum Denominations required for the amount : "<<temp<<endl;
	cout<<"Two Thousand Rupee Notes :\t"<<two_thou<<endl;
	cout<<"Five hundred Rupee Notes :\t"<<five_hun<<endl;
	cout<<"Hundred Rupee Notes : \t\t"<<hun<<endl;
	cout<<"Fifty Rupee Notes : \t\t"<<fifty<<endl;
	cout<<"Twenty Rupee Notes :\t\t"<<twenty<<endl;
	cout<<"Ten Rupee Notes : \t\t"<<ten<<endl;
	cout<<"Five Rupee Coins : \t\t"<<five<<endl;
	cout<<"Two Rupee Coins : \t\t"<<two<<endl;
	cout<<"One Rupee Coin : \t\t"<<one<<endl;
	return 0;
}
