#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

    int arr[12];

    cout<<"Array_1 = ";

    for(int i=0; i<12; i++)
    {
        cin>>arr[i];
    }

    cout<<endl;

    for(int i=0;i<12;i++)
    {
        int n=0;
        cout<<arr[i]<<" occurs = ";

        for(int j=0; j<12; j++)
        {
            if(arr[j]==arr[i])
            {
                n++;
            }
        }

        cout<<n<<" times "<<endl;
    }


    getch();
}
