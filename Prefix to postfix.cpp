#include<iostream>
#include<conio.h>
#include<stack>
using namespace std;

bool isOperator(char x)
{
    switch (x) {
    case '+':
    case '-':
    case '/':
    case '*':
        return true;
    }
    return false;
}

string Postconv(string pre)
{

    stack<string> a;

    int length = pre.size();


    for (int i=length-1; i>=0; i--)
    {
        if (isOperator(pre[i]))
        {
            string op1 = a.top();
            a.pop();
            string op2 = a.top();
            a.pop();

            string temp=op1+op2+pre[i];

            a.push(temp);
        }


        else {

            a.push(string(1, pre[i]));
        }
    }

    return a.top();
}


int main()
{
    string pre;
    cout<<"Enter prefix: ";
    cin>>pre;
    cout<<"Postfix : "<<Postconv(pre);

    getch();
}
