#include<iostream>
#include<conio.h>
using namespace std;

void encode(string s, int j)
{
    int a;
    for(int i=j; i<s.length(); i=i+j+1)
    {
        a=s[i];
        s[i]=(char)(a+j);
    }

    cout<<endl<<"Encoded String: "<<s;
}

void decode(string s, int j)
{
    int a;

    for(int i=j; i>s.length(); i=i-j-1)
    {
        a=s[i];
        s[i]=(char)(a+j);
    }
    cout<<endl<<"Decoded String: "<<s;
}

int main()
{
    int j;
    string s;
    cout<<"Sample String(s): ";
    getline(cin,s);

    cout<<"Sample integer(j): ";
    cin>>j;

    encode(s, j);
    decode(s, j);

    getch();
}
