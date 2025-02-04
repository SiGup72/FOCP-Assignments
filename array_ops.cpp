//array operations
#include <iostream>
using namespace std;
int main()
{
    int i;
    //input size of array
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    //a. input elements of array
    cout<<"Enter values for array"<<endl;
    for(i=0;i<n;i++)
    {cin>>arr[i];}
    //b. reversing the array
    cout<<"Reverse array"<<endl;
    for(i=n-1;i>=0;i--)
    {cout<<arr[i]<<" ";}
    //c. second largest 
    int max2,min2;
    int max=INT_MIN;
    int min=arr[0];
    for(i=0;i<n;i++)
    {if(arr[i]>max)
    {max2=max;
        max=arr[i];}}
    cout<<endl<<"The second largest number is - "<<max2<<endl;
    //c. second smallest
    for(i=0;i<n;i++)
    {if(arr[i]<min)
    {min2=min;
        min=arr[i];}}
    cout<<"The second smallest number is - "<<min2;
    return 0;
}