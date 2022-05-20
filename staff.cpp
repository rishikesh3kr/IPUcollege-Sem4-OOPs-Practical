#include<iostream>
#include<conio.h>
using namespace std;

class staff{
    int code;
    char name[20];
    public:
    void input()
    {
        cout<<endl<<"Enter staff code - ";
        cin>>code;
        cout<<"Enter staff name - ";
        cin>>name;
    }
    void output()
    {
        cout<<"Staff code is "<<code<<" and staff name is "<<name<<endl;
    }
};

class teacher:public staff{
    char subject[15];
    public:
    void input_subject()
    {
        cout<<"Enter the subject of the teacher - ";
        cin>>subject;
    }
    void output_subject()
    {
        cout<<"The subject of the teacher is "<<subject<<endl;
    }
};

class typist:public staff{
    int speed;
    public:
    void input_speed()
    {
        cout<<"Enter the speed of the typist - ";
        cin>>speed;
    }
    void output_speed()
    {
        cout<<"The speed of the typist is "<<speed<<endl;
    }
};

class officer:public staff{
    char grade[20];
    public:
    void input_grade()
    {
        cout<<"Enter the grade of the officer - ";
        cin>>grade;
    }
    void output_grade()
    {
        cout<<"The grade of the officer is "<<grade<<endl;
    }
};

class regular:public typist{
    int wage;
    public:
    void input_wage()
    {
        cout<<"Enter the wage of the regular typist - ";
        cin>>wage;
    }
    void output_wage()
    {
        cout<<"The wage of the regular typist is "<<wage<<endl;
    }
};

class casual:public typist{
    int wage;
    public:
    void input_wage()
    {
        cout<<"Enter the wage of the casual typist - ";
        cin>>wage;
    }
    void output_wage()
    {
        cout<<"The wage of the casual typist is "<<wage<<endl;
    }
};

int main()
{
    cout<<endl<<"=================================================="<<endl;
    cout<<"Program for implementing class hierarchy for Staff"<<endl;
    cout<<"=================================================="<<endl<<endl;
    teacher t1;
    typist t2;
    officer o1;
    regular r1;
    casual c1;
    t1.input();
    t1.input_subject();
    t1.output();
    t1.output_subject();
    t2.input();
    t2.input_speed();
    t2.output();
    t2.output_speed();
    o1.input();
    o1.input_grade();
    o1.output();
    o1.output_grade();
    r1.input();
    r1.input_speed();
    r1.input_wage();
    r1.output();
    r1.output_speed();
    r1.output_wage();
    c1.input();
    c1.input_speed();
    c1.input_wage();
    c1.output();
    c1.output_speed();
    c1.output_wage();
    cout<<endl<<"This program is made by:"<<endl<<"Rishikesh Kumar,CSE 2"<<endl<<"09813202720"<<endl;
    getch();
    return 0;
}