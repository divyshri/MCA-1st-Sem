#include<iostream>
using namespace std;
int main()
{
    int a[100],size,flag=0,i,j;
    
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    
    cout<<"Enter elements of the array"<<endl;
    
    for(int i=0;i<size;i++)
        cin>>a[i];
    
     for( i=0;i<size-1;i++)
    {
		for( j=i+1;j<size;j++)
        {
            if(a[i]==a[j])
            {
            	size=size-1;
            	for(int k=j;k<size;k++)
            		a[k]=a[k+1];
            	flag=1;
            	j=j-1;
            }

        }
    }
    
    if(flag==0)
    	cout<<"\n Array is without duplicates"<<endl;
    else
    {
	    cout<<"Array after removing duplicate elements is : "<<endl;
    	for(int i=0;i<size;i++)
        	cout<<a[i]<<"\t";
	}
}
