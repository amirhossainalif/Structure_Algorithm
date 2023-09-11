#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int arr[7];

    cout<<"Sample input (any 7 number): ";
    for(int i=0; i<7; i++)
    {
        cin>>arr[i];
    }

    cout<<"Sample output: "<<endl;

    int odd=0;
    for(int i=0; i<7; i++)
    {
        if(arr[i]%2!=0)
        {
            odd++;
        }
    }
    cout<<"total odd numbers: "<<odd<<endl;

    int even=0;
    for(int i=0; i<7; i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
    }

    cout<<"total even numbers: "<<even<<endl;

    int sum_odd=0;

    for(int i=0; i<7; i++)
    {
        if(arr[i]%2!=0)
        {
            sum_odd+=arr[i];
        }
    }

    cout<<"Sum of odd numbers: "<<sum_odd<<endl;

    int sum_even=0;

    for(int i=0;i<7;i++)
    {
        if(arr[i]%2==0)
        {
            sum_even+=arr[i];
        }
    }

    cout<<"Sum of even numbers: "<<sum_even<<endl;

    getch();
}
