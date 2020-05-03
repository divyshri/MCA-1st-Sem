#include<iostream>
using namespace std;
int main()
{
    int m[3][3],sum=0,choice;
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
    Reverse:
    cout<<"Choose any one of the subtriangles of the matrix"<<endl;
    cout<<"1. Upper-Left Triangle"<<endl;
    cout<<"2. Upper-Right Triangle"<<endl;
    cout<<"3. Lower-Left Triangle"<<endl;
    cout<<"4. Lower-Right Triangle"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
        {
            for(int i=0;i<3;i++)
            {
                for (int j=0;j<3-i;j++)
                {
                    cout<<m[i][j]<<"\t";
                }
                cout<<endl;
            }
            break;
        }

        case 2:
        {
            for(int i=0;i<3;i++)
            {
                for (int j=i;j<3;j++)
                {
                    cout<<m[i][j]<<"\t";
                }
                cout<<endl;
            }
             break;
        }

        case 3:
        {
            for(int i=0;i<3;i++)
            {
                for (int j=0;j<=i;j++)
                {
                    cout<<m[i][j]<<"\t";
                }
                cout<<endl;
            }
            break;
        }
        case 4:
        {
           for(int i=0;i<3;i++)
            {
                for (int j=0;j<3;j++)
                {
                    if(i+j>=2)
                        cout<<m[i][j]<<"\t";
                    else
                        cout<<"\t";
                }
                cout<<endl;
            }
            break;
        }
        default:
        {
            cout<<"Incorrect Choice please try again"<<endl;
            goto Reverse;
        }
    }

    return 0;
}
