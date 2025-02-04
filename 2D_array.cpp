#include <iostream>
using namespace std;
int main()
{
int arr[3][3],i,j;
cout<<"Enter the elements of 2d array"<<endl;
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
{cin>>arr[i][j];}}
//row measure array
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
{cout<<arr[i][j]<<"\t";}
cout<<endl;}
cout<<endl;
//column measure array or transpose
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
{cout<<arr[j][i]<<"\t";}
cout<<endl;}
cout<<endl;
//sum of rows and columns and largest sum 
int x,y;
for(i=0;i<3;i++)
{int sum=0,sum1=0,row,column;
for(j=0;j<3;j++)
{
sum+=arr[i][j];
sum1+=arr[j][i];
}
 cout<<"The sum of "<<i+1<<" row is "<<sum<<endl;
 cout<<"The sum of "<<i+1<<" column is "<<sum1<<endl;
 if(row<sum)
{row=sum;
y=i;}
if(column<sum1)
{column=sum1;
x=i;}}
cout<<"The "<<y<<" row has largest sum "<<endl;
cout<<"The "<<x<<" row has largest column "<<endl;
//diagonal sum
int sumd1=0,sumd2=0;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
    if(i==j){
sumd1+=arr[i][j];}
if(i+j==2){
    sumd2+=arr[i][j]; }
}
}
cout<<"The sum of primary diagonals is "<<sumd1<<endl;
cout<<"The sum of secondary diagonals is "<<sumd2<<endl;
 return 0;
}