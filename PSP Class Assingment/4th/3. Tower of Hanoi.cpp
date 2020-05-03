// C++ recursive function to solve tower of hanoi puzzle
#include <iostream>
using namespace std;

void towerOfHanoi(int n, char from_rod, char to_rod, char support_rod)
{
    if (n == 1)
    {
        cout<<"\n Move disk 1 from rod "<<from_rod <<" to rod "<<to_rod<<endl;
        return;
    }
    towerOfHanoi(n-1, from_rod, support_rod, to_rod);
    cout<<"\n Move disk "<<n<<" from rod "<<from_rod <<" to rod "<<to_rod<<endl;
    towerOfHanoi(n-1, support_rod, to_rod, from_rod);
}
 
int main()
{
    int n; // Number of disks
    cout<<"Enter the number of disks in the initial tower "<<endl;
    cin>>n;
    towerOfHanoi(n, 'A', 'C', 'B');  // A, B and C are names of rods
    return 0;
}
