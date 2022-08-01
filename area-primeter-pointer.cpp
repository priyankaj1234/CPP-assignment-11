#include<iostream>
using namespace std;
void area(int,int *);
void parimeter(int,int *);
int main()
{
    int s,a,p;

    cout<<endl<<"Enter side : ";
    cin>>s;

    area(s,&a);
    parimeter(s,&p);
    cout<<endl<<"Area of sq : "<<a;
    cout<<endl<<"Perimeter of sq : "<<p;

    return 0;
}

void area(int s, int *a)
{
    *a=s*s;
}

void parimeter(int s, int *p)
{
    *p=4*s;
}