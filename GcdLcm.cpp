#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int m,n,p,q,temp;
    cout<<endl<<"=============================================="<<endl;
    cout<<"Program for finding GCD and LCM of two numbers"<<endl;
    cout<<"=============================================="<<endl<<endl;
    cout<<"Enter first number : ";
    cin>>m;
    cout<<"Enter second number : ";
    cin>>n;
    p=m;
    q=n;
    
    while(q!=0)
    {
        temp=p%q;
        p=q;
        q=temp;
    }
    q=m*n/p;

    cout<<endl;
    cout<<"G.C.D. of the two numbers = "<<p<<endl<<"L.C.M. of the two numbers = "<<q<<endl;
    cout<<endl<<"This program is made by:"<<endl<<"Rishikesh Kumar,CSE 2"<<endl<<"09813202720"<<endl;
    return 0;
    getch();
}