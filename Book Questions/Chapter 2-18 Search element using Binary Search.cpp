#include<iostream>
using namespace std;
void bubble_sort(int a[],int s)
{
	int temp;
	for(int i=0;i<s;i++)
	{
		for(int j=i+1;j<s;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
int main()
{
    int a[100],size,check,flag=0,count=0;
    
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    
    cout<<"Enter elements of the array"<<endl;
    
    for(int i=0;i<size;i++)
        cin>>a[i];
    
    bubble_sort(a,size);
    
    cout<<"Enter any number to search in the array"<<endl;
    cin>>check;
    
	for(int i=0;a[i]<=check;i++)
    {
		cout<<endl<<a[i]<<endl;
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
