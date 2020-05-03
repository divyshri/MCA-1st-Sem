/* In a town, percentage of men is 52. the percentage of total literacy is 48.
If total percentage of literate males is 35 of toal percentage of literate men is 35 of total population,
write a program to find the total no. of illetrate men and womens in the town
if the total population is 80000 */

#include<iostream>
using namespace std;
int main()
{
	int t,m,il,lm,ilm,ilf;
	cout<<"Enter the % males in the town"<<endl;
	cin>>m;
	cout<<"Enter total % of literate people in the town"<<endl;
	cin>>il;
	cout<<"Enter the % of illetrate males in the town"<<endl;
	cin>>lm;
	m=m*800;
	li=li*800;
	lm=lm*800;
	ilm=m-lm;
	ilf=il-ilm;
	cout<<"Total no. of illetrate male in the town "<<ilm<<endl;
	cout<<"Total no. of illetrate felmale in the town "<<ilf<<endl;
	t=80000-(ilm+ilf);
	cout<<"Total no. of litetrate people in the town "<<ilf<<endl;
	return 0;
}
