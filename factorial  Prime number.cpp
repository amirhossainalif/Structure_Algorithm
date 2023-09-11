#include<iostream>
#include<conio.h>
using namespace std;

int factorial(int n)
{
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}

int main()
{
    int num;

    cout<<"Input: ";
    cin>>num;

    if(num==0||num==1)
    {
        cout<<"Output: error! not a prime number.";
    }

    for (int i= 2; i<=num/2; ++i)
    {
        if (num%i==0)
        {
            cout<<"Output: error! not a prime number.";
            break;
        }
        else
        {
            factorial(num);
            cout<<"Output: "<<factorial(num);
            break;
        }
    }



    getch();
}
