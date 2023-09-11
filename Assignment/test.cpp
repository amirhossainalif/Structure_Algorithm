#include<iostream>
#include<conio.h>
#include "arrayImplement.h"
using namespace std;

int main()
{
    int s1;
    cout<<"1D Array"<<endl<<endl;

    cout<<"Enter size: ";
    cin>>s1;
    cout<<endl;
    int arr[s1];

    input1DArray(arr,s1);
    print1DArray(arr,s1);
    reversePrint1DArray(arr,s1);

    cout<<endl<<endl;

    int se;
    cout<<"Enter the number to be searched: ";
    cin>>se;
    searchIn1DArray(arr,s1,se);

    findMax1DArray(arr,s1);
    findMin1DArray(arr,s1);

    int copyArray[s1];

    copy1DArray(arr,copyArray,s1);
    cout<<endl<<endl;


    cout<<"2D Array"<<endl<<endl;

    int s2;
    cout<<"Enter row & column size: ";
    cin>>s2;

    int **array2d=new int *[s2];

    for(int c=0; c<s2; c++)
    {
        array2d[c] = new int[3];
    }

    input2DArray(array2d, s2);
    print2DArray(array2d, s2);
    reversePrint2DArray(array2d,s2);

    cout<<endl<<endl;
    int se1;
    cout<<"Enter the number to be searched: ";
    cin>>se1;

    searchIn2DArray(array2d,s2,se1);


    findMax2DArray(array2d, s2);
    findMin2DArray(array2d, s2);

    int **copy2D = new int *[s2];

    for (int c=0; c<s2; c++)
    {
        copy2D[c] = new int[s2];
    }

    copy2DArray(array2d,copy2D,s2);

    getch();
}
