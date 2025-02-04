//rotate matrix 90 degrees 
#include <iostream>
using namespace std;
int main()
{
    int i,j,arr[3][3];
    cout<<"Enter elements of the 3X3 matrix"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {cin>>arr[i][j];}
    }
    //printing normal matrix
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {cout<<arr[i][j]<<"  ";}
        cout<<endl;
    }
    cout<<endl;
    //printing 90 degree clockwise matrix
    for(i=0;i<3;i++)
    {
        for(j=2;j>=0;j--)
        {cout<<arr[j][i]<<"  ";}
        cout<<endl;
    }
return 0;
}
