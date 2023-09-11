#include<iostream>
#include<conio.h>
using namespace std;

void Selection_sort(int arr[], int n)
{
    int check=0,index, p=0;
    for(int i=0; i<n-1; i++)
    {
        int index_min=arr[i];
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<index_min)
            {
                index_min=arr[j];
                check++;
                int index=j;
                p++;
            }
            if(check!=i)
            {
                int temp=arr[i];
                arr[i]=index_min;
                arr[index]=temp;
            }
        }
    }
    cout<<"sorted array: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"enter the size ";
    cin>>n;

    cout<<"Enter the elements of list: ";
    int arr[100];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    Selection_sort(arr,n);


    getch();
}

