#include<iostream>
#include<conio.h>
using namespace std;

struct Node
{
	int data;
	Node* next;

	Node(int x)
	{
		data = x;
		next = NULL;
	}
};

struct Queue
{
	Node *front, *rear;

	Queue()
	{
	     front = rear = NULL;
    }

	void enqueue(int x)
	{
		Node* temp = new Node(x);

		if (rear == NULL)
        {
			front = rear = temp;
			return;
		}
		rear->next = temp;
		rear = temp;
	}

	void dequeue()
	{
		if (front == NULL)
			return;

		Node* temp = front;
		front = front->next;

		if (front == NULL)
			rear = NULL;

		delete temp;
	}

	void show()
	{
	    Node* temp = front;
	    cout<< "List is: ";

	    while(temp != NULL)
        {
            cout<<temp->data << " ";
            temp = temp->next;
        }
        cout<< endl;
	}
};


int main()
{

	Queue q;
	q.enqueue(24);
	q.enqueue(30);
	q.enqueue(53);
	q.enqueue(74);
	q.enqueue(89);
	q.dequeue();
	q.show();

	getch();
}
