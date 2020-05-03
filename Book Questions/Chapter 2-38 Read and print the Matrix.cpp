#include<iostream>
using namespace std;
int main()
{
    int m[3][3];
    cout<<"Enter elements of the matrix"<<endl;
    for(int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<"Enter element of "<<i+1<<" th row and "<<j+1<<" th column : ";
            cin>>m[i][j];
        }
    }
    cout<<"Entered element of the matrix are"<<endl;
    for(int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<m[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
