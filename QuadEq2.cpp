#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c,x,y;
    float d,r1,r2;
    cout<<endl<<"==============================================="<<endl;
    cout<<"Program for finding roots of Quadratic Equation"<<endl;
    cout<<"==============================================="<<endl<<endl;    
    cout<<"For an equation of the form ax^2+bx+c=0; please enter "<<endl<<"The coefficient of x^2(a) =";
    cin>>a;
    cout<<"The coefficient of b(x) =";
    cin>>b;
    cout<<"The constant(c) =";
    cin>>c; 

    if(a==0)
    x=0;
    else
    x=1;

    switch(x)
    {
        case 0:
        {
            cout<<endl<<"Invalid quadratic equation entered!";
        }break;
        case 1:
        {
            d=b*b-4*a*c;
            if(d>0)
            y=1;
            else if(d==0)
            y=0;
            else
            y=-1;
            switch(y)
            {
                case 1:{
                    r1=(-b-sqrt(d))/(2*a);
                    r2=(-b+sqrt(d))/(2*a);
                    cout<<endl<<"Roots of the equation are "<<r1<<" and "<<r2;
                }break;
                case 0:{
                    r1=-b/(2*a);
                    cout<<endl<<"The equation has equal roots which are "<<r1;
                }break;
                case -1:{
                    cout<<endl<<"The equation has imaginary roots";
                }break;
                default:{
                    cout<<endl<<"Invalid Choice Entered";
                }break;
            }
        }
    }
    cout<<endl<<endl<<"This program is made by:"<<endl<<"Rishikesh Kumar,CSE 2"<<endl<<"09813202720"<<endl;
    return 0;
    getch();
}