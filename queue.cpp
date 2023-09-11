#include <iostream>
using namespace std;
 int  queue[100],front=-1,rear = -1;
 int maxSize=100;

    bool isEmpty()
   {
      if (front==-1 && rear==-1){
          cout<<"Queue is empty"<<endl;
          return true;
      }

      else
      {
          cout<<"Queue has some element"<<endl;
          return false;
      }
    }

bool isFull()
{
    if (rear==(maxSize-1)){
        cout<<"Queue is full"<<endl;
        return true;
    }
    else {
        cout<<"Queue is empty"<<endl;
        return false;
    }
}

void enqueue(int x)
{
    if(rear==(maxSize-1))
    {
        cout<<"error:queue full!"<<endl;
    }
    else if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        queue[rear] = x;
        cout<<"queue insarted "<<endl;
    }

    else
    {
        rear++;
        queue[rear]=x;
        cout<<"queue insarted"<<endl;
    }
}
void dequeue()
{
    if(front==-1 && rear==-1){
        cout<<"queue is empty! dequeue not possible"<<endl;
    }

    else if(front==rear)
    {
        front=rear=-1;

    }
    else  {
        front++;
    }
}

int frontElement()
{
    return  queue[front];
}

void showQueue()
{
    if (isEmpty())
    {
        cout<<"cannot show queue because it is empty"<<endl;
    }
    else{
        for(int i=front; i<=rear; i++)
        {
            cout<<"Queue is :"<<queue[i]<<endl;
        }
    }
}

int main()
{
    isEmpty();
    isFull();
    enqueue(7);
    enqueue(8);
    enqueue(2);
    dequeue();

    showQueue();

}

