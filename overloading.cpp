#include<iostream>
#include<conio.h>
using namespace std;

class complex{
    int r,i;
    public:
    complex()
    {
        r=0;
        i=0;
    }
    void input()
    {
        cout<<"Enter the real part of the number - ";
        cin>>r;
        cout<<"Enter the imaginary part of the number - ";
        cin>>i;
    }
    void output()
    {
        cout<<"The complex number is "<<r<<"+("<<i<<")i"<<endl;
    }
    complex operator --()
    {
        complex temp;
        temp.r=--r;
        temp.i=--i;
        return temp;
    }
};

int main()
{
    cout<<endl<<"========================================="<<endl;
    cout<<"Program for overloading the operator (--)"<<endl;
    cout<<"========================================="<<endl<<endl;
    complex c1,c2;
    c1.input();
    c1.output();
    c2=--c1;
    cout<<"After decrementing the complex number by 1 : ";
    c2.output();
    cout<<endl<<"This program is made by:"<<endl<<"Rishikesh Kumar,CSE 2"<<endl<<"09813202720"<<endl;
    getch();
    return 0;
}