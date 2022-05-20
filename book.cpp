#include<iostream>
#include<conio.h>
using namespace std;
class booktitle{
    int bno;
    char bname[50];
    public:
    void bookname()
    {
        cout<<"Enter the book number - ";
        cin>>bno;
        cout<<"Enter book name - ";
        cin>>bname;
    }
    void dispbook()
    {
        cout<<"The book number is "<<bno<<" and the book name is "<<bname<<endl;
    }
};

class book1:public booktitle{
    public:
    void b1details()
    {
        cout<<endl<<"For book 1"<<endl;
        bookname();
    }
    void b1display()
    {
        cout<<"Book 1 details are: "<<endl;
        dispbook();
    }
};

class book2:public booktitle{
    public:
    void b2details()
    {
        cout<<endl<<"For book 2"<<endl;
        bookname();
    }
    void b2display()
    {
        cout<<"Book 2 details are: "<<endl;
        dispbook();
    }
};

int main()
{
    cout<<endl<<"=================================================="<<endl;
    cout<<"Program for implementing class hierarchy for Books"<<endl;
    cout<<"=================================================="<<endl<<endl;
    book1 b1;
    book2 b2;
    b1.b1details();
    b1.b1display();
    b2.b2details();
    b2.b2display();
    cout<<endl<<"This program is made by:"<<endl<<"Rishikesh Kumar,CSE 2"<<endl<<"09813202720"<<endl;
    getch();
    return 0;
}