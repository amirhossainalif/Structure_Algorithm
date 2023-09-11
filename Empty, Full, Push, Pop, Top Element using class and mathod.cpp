#include<iostream>
using namespace std;


class MyStack
{
    int stack[100], top=0, MaxSize=100;

public:
    MyStack(int Size=100)
    {
        MaxSize=Size;
        top=0;
    }

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
        if(top==MaxSize)
        {
            cout<<"stack is full"<<endl;
            return true;
        }
        else{
            cout<<"stack is not full"<<endl;
            return false;
        }
    }

    bool push(int Element)
    {
        if(top==MaxSize)
        {
            cout<<"stack is full, not inserted"<<endl;
            return false;
        }
        else{
            stack[top]=Element;
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
};

int main()
{   MyStack m;
    m.isEmpty();
    m.isFull();
    m.push(1);
    m.push(2);
    m.push(3);
    m.isEmpty();
    m.pop();
    m.topElement();
    m.pop();
    m.pop();
    m.topElement();
    m.pop();
    m.push(5);
    m.push(6);
    m.push(7);
    m.push(8);
    m.show();
    return 0;
}

