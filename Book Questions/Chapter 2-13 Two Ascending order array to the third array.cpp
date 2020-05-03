#include<iostream>
using namespace std;
void bubble(int a[],int size)
{
    int temp;
    for(int i=0;i<size;i++)
    {
        for(int j=i;j<size;j++)
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
    int a[100],b[100],c[100],size1,size2;
    cout<<"Enter size of the first array"<<endl;
    cin>>size1;
    cout<<"Enter elements of the first array"<<endl;
    for(int i=0;i<size1;i++)
        cin>>a[i];
    bubble(a,size1);

    cout<<"Enter size of the Second array"<<endl;
    cin>>size2;
    cout<<"Enter elements of the second array"<<endl;
    for(int i=0;i<size2;i++)
        cin>>b[i];
    bubble(b,size2);

    for(int i=0;i<size1;i++)
        c[i]=a[i];

    for(int i=0;i<size1+size2;i++)
        c[i+size1]=b[i];

    bubble(c,size1+size2);

    cout<<"Merged and sorted array is "<<endl;
    for(int i=0;i<size1+size2;i++)
        cout<<c[i]<<"\t";
    return 0;
}
