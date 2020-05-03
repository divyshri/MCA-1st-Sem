#include<iostream>
using namespace std;
void a_sort(int a[],int x)
{
    int temp;
    for(int i=0;i<x;i++)
    {
        for(int j=i;j<x;j++)
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
    int size,a[100],temp;
    cout<<"Enter size of the first array"<<endl;
    cin>>size;
    cout<<"Enter elements of the array"<<endl;
    for(int i=0;i<size;i++)
        cin>>a[i];
    a_sort(a,size);
    cout<<"Sorted array is :"<<endl;
    for(int i=0;i<size;i++)
        cout<<a[i]<<endl;
    cout<<"Enter any element to enter into the sorted array"<<endl;
    cin>>a[size];
    a_sort(a,size+1);
    cout<<"Sorted array is :"<<endl;
    for(int i=0;i<size+1;i++)
        cout<<a[i]<<endl;
    return 0;
}
