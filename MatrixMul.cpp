#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int m,n,p,q,i,j;
    cout<<endl<<"=========================================="<<endl;
    cout<<"Program for multiplication of two matrices"<<endl;
    cout<<"=========================================="<<endl<<endl;
    cout<<"Enter size of first matrix : "<<endl;
    cin>>m>>n;
    cout<<"Enter size of second matrix : "<<endl;
    cin>>p>>q;
    int a[m][n],b[p][q];
    if(n!=p)
    {
        cout<<"*Matrix Multiplication is not possible*"<<endl;
    }
    else
    {
        cout<<"Enter elements of first matrix : "<<endl;
        for(i=0;i<m;i++)
         for(j=0;j<n;j++)
          cin>>a[i][j];
        cout<<"Enter elements of second matrix : "<<endl;
        for(i=0;i<p;i++)
         for(j=0;j<q;j++)
          cin>>b[i][j];

        cout<<"First Matrix is : "<<endl;
         for(i=0;i<m;i++)
         {    
          for(j=0;j<n;j++)
          {
             cout<<a[i][j]<<" ";
          }
          cout<<endl;
         }

        cout<<"Second Matrix is : "<<endl;
         for(i=0;i<p;i++)
         {    
          for(j=0;j<q;j++)
          {
             cout<<b[i][j]<<" ";
          }
          cout<<endl;
         }

        int c[m][q];
        for(i=0;i<m;i++)
         for(j=0;j<q;j++)
         {
             c[i][j]=0;
             for(int k=0;k<n;k++)
             c[i][j]+=a[i][k]+b[k][j];
         }

         cout<<"Matrix after Multiplication is : "<<endl;
         for(i=0;i<m;i++)
         {    
          for(j=0;j<q;j++)
          {
             cout<<c[i][j]<<" ";
          }
          cout<<endl;
         }
    }
    cout<<endl<<"This program is made by:"<<endl<<"Rishikesh Kumar,CSE 2"<<endl<<"09813202720"<<endl;
    return 0;
    getch();
}