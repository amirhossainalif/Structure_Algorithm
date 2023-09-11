#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n1=6;
    int n2=6;
    int arr1[n1]={4,1,8,5,2,11};
    int arr2[n2]={3,6,9,10,7,4};

    cout<<"Array 1 = ";
    for(int i=0; i<6; i++)
    {
        cout<<arr1[i]<<" ";
    }

    cout<<"\nArray 2 = ";
    for(int i=0; i<6; i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

    int arr[n1+n2];

    for(int i=0; i<n1; i++)
    {
        arr[i]=arr1[i];
    }

    for(int i=6,j=0; i<n1+n2; i++,j++)
    {
        arr[i]=arr2[j];
    }

    for(int i=0;i<12;i++)
	{
		for(int j=i+1;j<12;j++)
		{
            if(arr[i]<arr[j])
            {
                int temp  =arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }

		}
	}

    cout<<endl;
    cout<<"Output: ";
	for(int i=0; i<12; i++)
    {
        if(arr[i]%2==0)
        {
            cout<<arr[i]<<" ";
        }
    }

    getch();
}
