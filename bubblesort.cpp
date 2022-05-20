#include<iostream>
#include<conio.h>
#define size 10
using namespace std;
class array
{
    int a[size];
    int i,j,m;
    public:
    array()
    {
        a[0]=0;
    }
    void input()
    {
        cout<<"Enter size of array you want to sort - ";
        cin>>m;
        cout<<"Enter elements of array one by one :"<<endl;
        for(i=0;i<m;i++)
        {
            cin>>a[i];
        }
    }
    void output()
    {
        cout<<"Array - ";
        for(i=0;i<m;i++)
        cout<<a[i]<<" ";
        cout<<endl;
    }
    void bubble()
    {
        cout<<endl<<"--Sorting in Progress--"<<endl<<endl;
        int temp;
        for(i=0;i<m;i++)
         for(j=0;j<m-1;j++)
          if(a[j]>a[j+1])
          {
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
          }
    }
};
int main()
{
    array a1;
    cout<<endl<<"=============================================="<<endl;
    cout<<"Program for sorting an array using bubble sort"<<endl;
    cout<<"=============================================="<<endl<<endl;
    a1.input();
    a1.output();
    a1.bubble();
    a1.output();
    cout<<endl<<"This program is made by:"<<endl<<"Rishikesh Kumar,CSE 2"<<endl<<"09813202720"<<endl;
    return 0;
    getch();
}