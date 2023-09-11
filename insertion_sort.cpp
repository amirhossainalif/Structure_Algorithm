#include<iostream>
#include<conio.h>
using namespace std;


void insertion_sort(int arr[], int n)
{
    int index,p=0;
    for(int i=1; i<n; i++)
    {
        int item=arr[i];
        if(item<arr[i-1])
        {
            for(int j=0; j<=i; j++)
            {
                if(item<arr[j])
                {
                    index=j;
                    for(int k=i; k>j; k--)

                        arr[k]=arr[k-1];
                        p++;
                    break;
                }
            }
        }
        else
            continue;
        arr[index]=item;
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

    insertion_sort(arr,n);


    getch();
}
