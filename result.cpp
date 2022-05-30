#include<iostream>
#include<conio.h>
using namespace std;

class result{
    char course[20],result[20];
    public:
    void input()
    {
        cout<<endl<<"Enter the course you're enrolled in - ";
        cin>>course;
        cout<<"Enter the result - ";
        cin>>result;
    }
    void output()
    {
        cout<<"The course enrolled is "<<course<<" and the result is "<<result<<endl;
    }
};

class sessional1:virtual public result{
    char subject[30];
    int marks;
    public:
    void input_sess1()
    {
        cout<<"Enter the subject - ";
        cin>>subject;
        cout<<"Enter the marks in sessional 1 - ";
        cin>>marks;
    }
    void output_sess1()
    {
        cout<<"The marks in "<<subject<<" in sessional 1  are "<<marks<<endl;
    }
};

class sessional2:virtual public result{
    char subject[30];
    int marks;
    public:
    void input_sess2()
    {
        cout<<"Enter the subject - ";
        cin>>subject;
        cout<<"Enter the marks in sessional 2 - ";
        cin>>marks;
    }
    void output_sess2()
    {
        cout<<"The marks in "<<subject<<" in sessional 2  are "<<marks<<endl;
    }
};

class biodata:public sessional1,public sessional2{
    int rollno;
    char name[25];
    public:
    void input_bio()
    {
        cout<<"Enter the roll no of the student - ";
        cin>>rollno;
        cout<<"Enter the name of the student - ";
        cin>>name;
        input_sess1();
        input_sess2();
    }
    void output_bio()
    {
        cout<<endl<<"The roll number of the student is "<<rollno<<endl<<"The name of the student is "<<name<<endl;
        output_sess1();
        output_sess2();
    }
};

int main()
{
    cout<<endl<<"===================================================="<<endl;
    cout<<"Program for implementing class hierarchy for Biodata"<<endl;
    cout<<"===================================================="<<endl<<endl;
    biodata b1;
    b1.input_bio();
    b1.input();
    b1.output_bio();
    b1.output();
    cout<<endl<<"This program is made by:"<<endl<<"Rishikesh Kumar,CSE 2"<<endl<<"09813202720"<<endl;
    getch();
    return 0;
}
