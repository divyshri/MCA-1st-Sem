#include<iostream>
using namespace std;
int main()
{
	int A[100],size,element,*ptr,flag=0;
	cout<<"Enter the number of elemets you want yo insert."<<endl;
	cin>>size;
	cout<<"Enter the elements of the array"<<endl;
	for(int i=0;i<size;i++)
		cin>>A[i];
    cout<<"Enter element that to be searched"<<endl;
    cin>>element;
    for(int i=0;i<size;i++)
    {
        if(A[i]==element)
        {
            ptr= & A[i];
            flag=1;
            break;
        }
    }
    if(flag)
        cout<<"Address of the found element is "<<ptr<<endl;
    else
        cout<<"Element not found"<<endl;
}
