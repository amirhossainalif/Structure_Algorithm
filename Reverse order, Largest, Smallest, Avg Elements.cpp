#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int max, min;
    float avg;
    int arr[5];

    cout<<"Sample input (any 5 number): ";
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }

    cout<<"Sample output:"<<endl;
    cout<<"Reverse order: ";

    for(int i=5-1; i>=0; i--)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    max=arr[0];
    for(int i=0; i<5; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"Largest element: "<<max<<endl;

    min=arr[0];
    for(int i=0; i<5; i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<"Smallest element: "<<min<<endl;

    float sum=0;
    for(int i=0; i<5; i++)
    {
        sum+=arr[i];
    }

    avg= sum/5;

    cout<<"Average value of the elements: "<<avg<<endl;





    getch();
}
