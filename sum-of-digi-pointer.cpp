#include<iostream>
using namespace std;
int sumofdigi(int, int *);
int rev(int, int *);
int main()
{
    int n,p,r;

    cout<<endl<<"Enter a number : ";
    cin>>n;

    sumofdigi(n,&p);
    rev(n,&r);

    cout<<endl<<"Sum of digits : "<<p;
    cout<<endl<<"Reverse of no  : "<<r;

    return 0;
}

int sumofdigi(int n,int *p)
{   
    int m,sum=0;
    while(n>0)
    {
        m=n%10;
        sum=sum+m;
        n=n/10;
        *p=sum;
    }
    
}

int rev(int n, int *r)
{
    int rem,re;
    while(n>0)
    {
        rem=n%10;
        re=rem+(re*10);
        n=n/10;
        *r=re;
    }
    
}