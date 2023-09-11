#include<iostream>
using namespace std;

print1DArray(int *array, int size)
{
    cout<<endl<<"Array elements of 1D array: ";

    for(int i=0; i<size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl<<endl;
}

reversePrint1DArray(int *array, int size)
{
    cout<<"Reverse print of 1D array: ";
    for(int i=size-1; i>=0; i--)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

input1DArray(int *array, int size)
{
    cout<<"Enter 1D array elements: ";

    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }
    cout<<endl;
}

searchIn1DArray(int *array, int size,int searchKey )
{
    int p=-1;
    for(int i=0; i<size; i++)
    {
        if(array[i]==searchKey)
        {
            p=i;
            break;
        }
    }
    if(p==-1)
    {
        cout<<searchKey<<" not found in 1D array"<<endl;
    }
    else
    {
        cout<<searchKey<<" found at index "<<p<<" in 1D array"<<endl;
    }
}

findMax1DArray(int *array,int size)
{
    int max=array[0];
    for(int i=1; i<size; i++)
    {
        if(max<array[i])
        {
            max=array[i];
        }
    }
    cout<<endl<<"The max element of 1D array is "<<max<<endl;
}


findMin1DArray(int *array,int size)
{
    int min=array[0];
    for(int i=1; i<size; i++)
    {
        if(min>array[i])
        {
            min=array[i];
        }
    }
    cout<<endl<<"The minimum element of 1D array is "<<min<<endl;
}

copy1DArray(int *sourceArray,int *destinationArray,int size)
{
    for(int i=0; i<size; i++)
    {
        destinationArray[i]=sourceArray[i];
    }

    cout<<endl<<"The copy 1D array is: ";

    for(int i=0; i<size; i++)
    {
        cout<<destinationArray[i]<<" ";
    }
    cout<<endl;
}


print2DArray(int **array,int size)
{
    cout<<endl<<"2D array="<<endl;
    for(int r=0; r<size; r++)
    {
        for(int c=0; c<size; c++)
        {
            cout<<"\t"<<array[r][c];
        }
        cout<<endl;
    }
}

reversePrint2DArray(int **array,int size)
{
    cout<<endl;
    cout<<"reverse 2D array="<<endl;
    for(int r=size-1; r>=0; r--)
    {
        for(int c=size-1; c>=0; c--)
        {
            cout<<"\t"<<array[r][c];
        }
        cout<<endl;
    }
}

input2DArray(int **array,int size)
{
    cout<<endl<<"Enter elements for 2D array"<<endl;
    for(int r=0; r<size; r++)
    {
        for(int c=0; c<size; c++)
        {
            cout<<"Array["<<r<<"]["<<c<<"]=";
            cin>>array[r][c];
        }
    }
}

searchIn2DArray(int **array,int size,int searchKey)
{

    int p1=-1;
    for(int r=0; r<size; r++)
    {
        for(int c=1; c<size; c++)
        {
            if (array[r][c]==searchKey)
            {
                p1=1;
                cout<<searchKey<<" found at index ["<<r<<"]["<<c<<"]"<<endl;
                break;
            }
        }
    }
    if(p1==-1)
    {
        cout<<searchKey<<" not found in 2D array"<<endl;
    }
}

findMax2DArray(int **array,int size)
{
    cout<<endl;
    int max = array[0][0];
    for(int r=0; r<size; r++)
    {
        for(int c=0; c<size; c++)
        {
            if(array[r][c]>max)
            max=array[r][c];
        }
    }
    cout<<"The max element of 2D array: "<<max<<endl;
}

findMin2DArray(int **array,int size)
{
    int min=array[0][0];
    for(int r=0; r<size; r++)
    {
        for(int c=0; c<size; c++)
        {
            if(array[r][c]<min)
            min=array[r][c];
        }
    }
    cout<<endl<<"The minimum element of 2D array: "<<min<<endl;
}

copy2DArray(int **sourceArray,int **destinationArray,int size)
{
    for(int r=0; r<size; r++)
    {
        for(int c=0; c<size; c++)
        {
            destinationArray[r][c]=sourceArray[r][c];
        }
    }

    cout<<endl<<"coppied 2D array is"<<endl;

    for(int r=0; r<size; r++)
    {
        for(int c=0; c<size; c++)
        {
            cout<<"\t"<<destinationArray[r][c];
        }
        cout<<endl;
    }
}
