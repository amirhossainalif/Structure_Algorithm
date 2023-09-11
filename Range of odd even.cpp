#include<iostream>
#include<conio.h>
using namespace std;

void odd_even(int start, int ends)
{

    cout<<"Odd numbers in that range: ";
    for(int i=start; i<=ends; i++)
    {
        if (i%2!=0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;

    cout<<"Even numbers in that range: ";
    for(int i=start; i<=ends; i++)
    {
        if(i%2==0)
        {
            cout<<i<<" ";
        }
    }
}

int main()
{
    int start, ends;

    cout<<"sample input: "<<endl;
    cout<<"Starting range: ";
    cin>>start;
    cout<<"Ending range: ";
    cin>>ends;

    cout<<"Sample output: "<<endl;

    odd_even(start, ends);

    getch();
}
