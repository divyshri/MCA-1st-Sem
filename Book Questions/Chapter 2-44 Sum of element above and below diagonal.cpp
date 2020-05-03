#include<iostream>
using namespace std;
int main()
{
    int m[3][3],sum=0;
    cout<<"Enter elements of the matrix"<<endl;
    for(int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<"Enter element of "<<i+1<<" th row and "<<j+1<<" th column : ";
            cin>>m[i][j];
            if(i!=j)
        		sum+=m[i][j];
        }
    }
    cout<<endl<<"Sum of elements above and below the diagonal of the matrix is "<<sum<<endl;
    return 0;
}
