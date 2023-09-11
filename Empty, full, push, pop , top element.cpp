#include<iostream>
using namespace std;

int stack[50], top=0, maxsize=50;
bool isEmpty()
{
    if(top==0)
    {
        cout<<"stack has no element"<<endl;
        return true;
    }
    else
    {
        return false;
    }
}

bool isFull()
{
    if(top==maxsize)
    {
        cout<<"stack is full"<<endl;
        return true;
    }
    else{
        cout<<"stack is not full"<<endl;
        return false;
    }
}

bool push(int x)
{
    if(top==maxsize)
    {
        cout<<"stack is full, not inserted"<<endl;
        return false;
    }
    else{
        stack[top]=x;
        top++;
        cout<<"element inserted"<<endl;
        return true;
    }
}

bool pop()
{
    if(top==0)
    {
        cout<<"stack is empty, not popped"<<endl;
        return false;
    }
    else{
        cout<<"element popped"<<endl;
        cout<<"the popped element: "<<stack[top-1]<<endl;
        top--;
        return true;
    }
}

void topElement()
{
    if(top==0)
    {
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"top element is: "<<stack[top-1]<<endl;
    }
}

void show()
{
    if(top==0)
    {
        cout<<"stack has no element to show"<<endl;
    }
    else
    {
        cout<<"stack is: "<<endl;
        for(int i=top-1; i>-1; i--)
        {
            cout<<stack[i]<<endl;
        }
    }
}

int main()
{
    isEmpty();
    isFull();

    push(1);
    push(2);
    push(3);

    isEmpty();
    pop();
    topElement();
    pop();
    topElement();
    pop();
    topElement();
    pop();
    push(4);
    push(5);
    push(6);
    show();

    return 0;
}
