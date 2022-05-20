#include<iostream>
#include<conio.h>
using namespace std;

class student{
    char name[20];
    int age;
    public:
    void input()
    {
        cout<<endl<<"Enter name of student - ";
        cin>>name;
        cout<<"Enter age of the student - ";
        cin>>age;
    }
    void output()
    {
        cout<<"Name of student is "<<name<<" and the age is "<<age<<endl;
    }
};

class primary_student:public student{
    char activity[30];
    int noofhrs;
    public:
    void readprimary()
    {
        cout<<"Enter activity of student - ";
        cin>>activity;
        cout<<"Enter number of hours of student - ";
        cin>>noofhrs;
    }
    void displayprimary()
    {
        cout<<"The activity of the student is "<<activity<<" and the number of hours given by student is "<<noofhrs<<endl;
    }
};

class secondary_student:public student{
    char activity[30];
    int noofhrs;
    public:
    void readsecondary()
    {
        cout<<"Enter activity of student - ";
        cin>>activity;
        cout<<"Enter number of hours of student - ";
        cin>>noofhrs;
    }
    void displaysecondary()
    {
        cout<<"The activity of the student is "<<activity<<" and the number of hours given by student is "<<noofhrs<<endl;
    }
};

class book:public student{
    char bname[30],author[20];
    int noofpages;
    public:
    void readbook()
    {
        cout<<"Enter book name taken by student - ";
        cin>>bname;
        cout<<"Enter author of the book - ";
        cin>>author;
        cout<<"Enter number of pages in the book - ";
        cin>>noofpages;
    }
    void displaybook()
    {
        cout<<"The book taken by student is "<<bname<<", the author of the book is "<<author<<" and the number of pages in the book are "<<noofpages<<endl;
    }
};

class equipment:public secondary_student{
    char equip_name[20];
    char role[20];
    public:
    void input_equip()
    {
        cout<<"Enter the name of equipment - ";
        cin>>equip_name;
        cout<<"Enter the role of equipment - ";
        cin>>role;
    }
    void display_equip()
    {
        cout<<"Name of the equipment is "<<equip_name<<" and the role of the equipment is "<<role<<endl;
    }
};

int main()
{
    cout<<endl<<"====================================================="<<endl;
    cout<<"Program for implementing class hierarchy for Students"<<endl;
    cout<<"====================================================="<<endl<<endl;
    student s1;
    primary_student p1;
    secondary_student s2;
    book b1;
    equipment e1;
    s1.input();
    s1.output();
    p1.input();
    p1.readprimary();
    p1.output();
    p1.displayprimary();
    s2.input();
    s2.readsecondary();
    s2.output();
    s2.displaysecondary();
    b1.input();
    b1.readbook();
    b1.output();
    b1.displaybook();
    e1.input();
    e1.readsecondary();
    e1.input_equip();
    e1.output();
    e1.displaysecondary();
    e1.display_equip();
    cout<<endl<<"This program is made by:"<<endl<<"Rishikesh Kumar,CSE 2"<<endl<<"09813202720"<<endl;
    getch();
    return 0;
}