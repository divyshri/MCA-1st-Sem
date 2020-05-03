#include<iostream>
using namespace std;
int main()
{
    int a[100],size,check,flag=0,count=0;
    
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    
    cout<<"Enter elements of the array"<<endl;
    
    for(int i=0;i<size;i++)
        cin>>a[i];
    
    cout<<"Enter any number to search in the array"<<endl;
    cin>>check;
    
	for(int i=0;i<size;i++)
    {
		if(check==a[i])
		{
			flag=1;
			count++;
		}
    }
    
    if(flag==0)
    	cout<<"\n Element not found"<<endl;
    else
    	cout<<"\n Element found : "<<count<<" times "<<endl;
    return 0;
}
