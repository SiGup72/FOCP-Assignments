#include <iostream>
using namespace std;
int main()
{
    int n,num=1;
    cout<<"Enter the order of spiral"<<endl;
    cin>>n;
    cout<<"The spiral of order "<<n<<" is:"<<endl;
    int i,j,k,l;
   int spi[n][n];
   int a=0,b=0,c=n-1,d=n-1;
   while(a<=c && b<=d)
   {
   for(j=b;j<=d;j++)
   {spi[a][j]=num;
   num++;}
   a++;
   for(i=a;i<=c;i++)
   {spi[i][d]=num;
   num++;}
   d--;
   if(a<=c)
   {for(j=d;j>=b;j--)
   {spi[c][j]=num;
   num++;}
   c--;}
   if(b<=d)
   {for(i=c;i>=a;i--)
   {spi[i][b]=num;
   num++;}
   b++;}}

    for(i=0;i<n;i++)
    {for(j=0;j<n;j++)
    {cout<<spi[i][j]<<"\t";}
    cout<<endl;}
    return 0;
}
