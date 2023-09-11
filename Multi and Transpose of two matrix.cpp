#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a[100][100], b[100][100], multi[100][100], trans[100][100];
    int r,c;

    cout<<"1st matrix:"<<endl;
    cout<<"Enter number of rows: ";
    cin>>r;

    cout<<"Enter number of columns: ";
    cin>>c;

    cout<<endl;

    cout<<"Enter elements of 1st matrix: "<<endl;
    for(int i=0; i<r; ++i)
    {
        for(int j=0; j<c; ++j)
        {
            cout<<"Enter element a"<<i+1<<j+1<<":";
            cin>>a[i][j];
        }
    }

    cout<<"\n2nd matrix: "<<endl;
    cout<<"Enter number of rows: ";
    cin>>r;

    cout<<"Enter number of columns: ";
    cin>>c;

    cout<<endl;

    cout<<"Enter elements of 2nd matrix: "<<endl;
    for(int i=0; i<r; ++i)
    {
        for(int j=0; j<c; ++j)
        {
            cout<<"Enter element b"<<i+1<<j+1<<":";
            cin>>b[i][j];
        }
    }

    for(int i=0; i<r; ++i)
    {
        for(int j=0; j<c; ++j)
        {
            multi[i][j]+=a[i][j]*b[i][j];
        }
    }

     cout<<endl;
     cout<<"Multiplication: "<<endl;
    for(int i=0; i<r; ++i)
    {
        for(int j=0; j<c; ++j)
        {
            cout<<" "<<multi[i][j];
            if(j==r-1)
            {
                cout<<endl;
            }
        }
    }

    for(int i=0; i<r; ++i)
    {
        for(int j=0; j<c; ++j)
        {
            trans[j][i]=multi[i][j];
        }
    }

    cout<<endl;
    cout<<endl<<"Transpose:"<<endl;
    for(int i=0; i<r; ++i)
    {
        for(int j=0; j<c; ++j)
        {
            cout<<" "<<trans[i][j];
            if(j==r-1)
            {
                cout<<endl;
            }
        }
    }



    getch();
}
