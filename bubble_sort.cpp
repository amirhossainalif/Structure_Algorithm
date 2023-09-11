#include<iostream>
#include<conio.h>
using namespace std;

void bubble_sort(int arr[], int n)
{
    int p=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                p++;
            }
        }
    }
    cout<<"Bubble sorted array: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Number of comparisons = "<<(n*(n-1)/2)-1<<endl;
    cout<<"Number of exchange = "<<p<<endl;
}

int main()
{
    int n;
    cout<<"enter the number of array elements: ";
    cin>>n;

    cout<<"Enter the elements of array: ";
    int arr[100];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    bubble_sort(arr,n);


    getch();
}
