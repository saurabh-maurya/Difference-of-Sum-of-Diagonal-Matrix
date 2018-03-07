#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<" Give Size Index of Square Matrix :  ";
    cin>>n;
    int a[n][n],spd=0,ssd=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
              cin>>a[i][j];


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+j==n-1)
                 ssd=ssd+a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
               spd=spd+a[i][j];
        }
    }
    cout<<"Difference of Sum of Diagonal : "<<abs(spd-ssd);

    return 0;
}
