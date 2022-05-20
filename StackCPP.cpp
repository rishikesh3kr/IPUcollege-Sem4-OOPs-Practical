#include<iostream>
#include<conio.h>
#define size 10
using namespace std;
class stack
{
    int top;
    int a[size];

    public:

    void push(int c)
    {
        if(top==size-1)
        cout<<"*Overflow condition*"<<endl;
        else
        {
            top++;
            a[top]=c;
        }
    }

    void pop()
    {
        int temp;
        if(top==-1)
        cout<<"*Underflow Condition*"<<endl;
        else
        {
            temp=a[top];
            top--;
            cout<<"Popped element is "<<temp<<endl;
        }
    }

    void display()
    {
        int i;
        for(i=top;i>=0;--i)
        cout<<a[i]<<endl;
    }

    stack()
    {
        top=-1;
    }
};

int main()
{
    stack p;
    int ch;
    do{
        cout<<endl<<endl;
        cout<<"|| Welcome to STACK ||"<<endl;
        cout<<"1. Push an element"<<endl;
        cout<<"2. Pop an element"<<endl;
        cout<<"3. Display the stack"<<endl;
        cout<<"4. Exit the program"<<endl;
        cout<<endl<<"Enter your choice - ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                    {
                        int n;
                        cout<<"--Push Operation initiated--"<<endl<<"Enter element to push - ";
                        cin>>n;
                        p.push(n);
                    }break;
            case 2:
                    {
                        cout<<"--Push Operation initiated--"<<endl;
                        p.pop();
                    }break;
            case 3: 
                    {
                        cout<<"--Displaying the Stack--"<<endl;
                        p.display();
                    }break;
            case 4: break;
            default: cout<<"Wrong Choice! Re-Enter..."<<endl;
        }
    }while(ch!=4);
    cout<<endl<<"This program is made by:"<<endl<<"Rishikesh Kumar,CSE 2"<<endl<<"09813202720"<<endl;
    return 0;
    getch();
}