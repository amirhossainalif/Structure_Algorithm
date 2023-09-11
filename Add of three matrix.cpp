#include<iostream>
#include<conio.h>
using namespace std;


int main()
{
    int r, c;
    int x[100][100], y[100][100], z[100][100], sum[100][100];

    cout<<"Enter number of rows: ";
    cin>>r;

    cout<<"Enter number of columns: ";
    cin>>c;

    cout<<endl;
    cout<<"Enter elements of 1st matrix: "<< endl;

    for(int i=0; i<r; ++i)
    {
        for(int j=0; j<c; ++j)
       {
           cout<<"Enter element a"<<i+1<<j+1<<" : ";
           cin>>x[i][j];
       }
    }

    cout<<endl;
    cout<<"Enter elements of 2nd matrix: "<< endl;
    for(int i=0; i<r; ++i)
    {
        for(int j=0; j<c; ++j)
       {
           cout<<"Enter element b"<<i+1<<j+1<<" : ";
           cin>>y[i][j];
       }
    }


    cout<<endl;
    cout<<"Enter elements of 3rd matrix: "<< endl;
    for(int i=0; i<r; ++i)
    {
        for(int j=0; j<c; ++j)
       {
           cout<<"Enter element c"<<i+1<<j+1<< " : ";
           cin>>z[i][j];
       }
    }

    for(int i=0; i<r; ++i)
    {
        for(int j=0; j<c; ++j)
        {
            sum[i][j]=x[i][j]+y[i][j]+z[i][j];
        }
    }


    cout<<endl;
    cout<<"Sample Output: "<<endl;
    cout<<"Addition of three matrix is: "<< endl;
    for(int i=0; i<r; ++i)
    {
        for(int j=0; j<c; ++j)
        {
            cout<<sum[i][j] << "  ";
            if(j==c-1)
                cout<<endl;
        }
    }

    getch();
}
