#include<iostream>
using namespace std;
void rev(int, int *);
int main()
{
    int num,r;
    cout<<endl<<"Enter a number : ";
    cin>>num;

    rev(num,&r);
    
    return 0;
}

void rev(int num, int *r)
{
    int rev=0, rem;
    while(num>0)
    {
        rem=num%10;
        rev=rem+(rev*10);
        num=num/10;
    }
    cout<<endl<<"Reverse : "<<rev;
}