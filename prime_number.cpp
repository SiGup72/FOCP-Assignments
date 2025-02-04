//number manipulation and prime numbers
#include <iostream>
using namespace std;
//function to check prime
int prime(int n)
{int i;
for(i=2;i<=n/2;i++)
{if(n%i==0)
{return 0;}}
return 2;}

int main()
{ //input integer from user
     int n;
cout<<"Enter a positive integer"<<endl;
cin>>n;
int x,i;
x=prime(n);
//if number is prime
if(x==2)
{cout<<"The number is prime"<<endl;
//checking for next prime
for(i=n+1;;i++)
{x=prime(i);
if(x==2)
{cout<<"The next prime is - "<<i<<endl;
break;} }
}
//if number is not prime
else
{cout<<"The factors of the number are:"<<endl;
//factors 
for(i=1;i<=n/2;i++)
{if(n%i==0)
{cout<<i<<" ";}}
cout<<n;
}
return 0;
}
