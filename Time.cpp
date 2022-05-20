#include<iostream>
#include<conio.h>
using namespace std;
class time
{
    int hr,mn,sc;
    public:
    time()
    {
        hr=0;
        mn=0;
        sc=0;
    }
    void input()
    {
        int h,m,s;
        cout<<"Enter hours, minutes and seconds:"<<endl;
        cin>>h>>m>>s;
        hr=h;
        mn=m;
        sc=s;
    }

    void output()
    {
        cout<<"The time is "<<hr<<":"<<mn<<":"<<sc<<endl;
    }

    time add(time t1, time t2)
    {
        time t3;
        t3.hr=t1.hr+t2.hr;
        t3.mn=t1.mn+t2.mn;
        t3.sc=t1.sc+t2.sc;
        cout<<endl<<"--Adding time--"<<endl<<"After addition, ";
        if(t3.sc>60)
        {
            t3.mn+=(t3.sc/60);
            t3.sc=t3.sc%60;
        }
        if(t3.mn>60)
        {
            t3.hr+=(t3.mn/60);
            t3.mn=t3.mn%60;
        }
        return t3;
    }
};
int main()
{   
    cout<<endl<<"=========================================="<<endl;
    cout<<"Program for addition of two time durations"<<endl;
    cout<<"=========================================="<<endl<<endl;
    time t1,t2;
    t1.input();
    t1.output();
    t2.input();
    t2.output();
    time t3=t3.add(t1,t2);
    t3.output();
    cout<<endl<<"This program is made by:"<<endl<<"Rishikesh Kumar,CSE 2"<<endl<<"09813202720"<<endl;
    return 0;
    getch();
}