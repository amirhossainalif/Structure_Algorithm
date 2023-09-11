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

    Selection_sort(arr,n);


    getch();
}
