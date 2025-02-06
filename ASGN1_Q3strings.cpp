//String manipulation
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    //input a string by user
    char x[25];
    cout<<"Enter the string"<<endl;
    cin>>x;
    cout<<"The string is "<<x<<endl;
    //palindrome or not
    char y[25];
     strcpy(y,x);
    strrev(x);
    if(strcmp(x,y)==0){
    cout<<"The string is palindrone"<<endl;
    }
    else{
    cout<<"The string is not palindrone"<<endl;}
    //count frequency of all characters
    int i=0,j,alpha[26];
    for(i=0;i<26;i++)
    {alpha[i]=0;}
    for(i=0;i<strlen(x);i++)
    {
        if(x[i]>='a'&& x[i]<='z')
        {j=x[i]-'a';
        alpha[j]+=1;}
    }
    for(i=0;i<26;i++)
    {if(alpha[i]>0)
    {cout<<"The character "<<(char)('a'+i)<<" appears "<<alpha[i]<<" times"<<endl;}}
    
    //change vowels to *
    for(i=0;i<strlen(y);i++)
    {if(y[i]=='a'||y[i]=='A'||y[i]=='e'||y[i]=='E'||y[i]=='i'||y[i]=='I'||y[i]=='o'||y[i]=='O'||y[i]=='u'||y[i]=='U')
    {y[i]='*';}} 
    cout<<y;

    return 0;
}
