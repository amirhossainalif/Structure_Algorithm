#include<iostream>
#include<conio.h>
using namespace std;

class Node
{
    public:
	int data;
	Node* next;

	Node(int n)
	{
		this->data = n;
		this->next = NULL;
	}
};

class Stack
{
	Node* top;

    public:
	Stack()
	{
	    top = NULL;
    }

	void push(int data)
	{
		Node* temp = new Node(data);

		if(!temp)
        {
			cout << "\nStack Overflow"<<endl;
		}

		temp->data = data;
		temp->next = top;
		top = temp;
	}


	bool isEmpty()
	{
	    cout<<"Stack empty!"<<endl;
		return top == NULL;
	}

	int Top()
	{
		if(!isEmpty())
			return top->data;
		else
			return 0;
	}

	void pop()
	{
		Node* temp;
		if(top == NULL)
        {
			cout<<"Stack Underflow"<<endl;
			return;
		}
		else
		{
			temp = top;
			top = top->next;
			delete temp;
		}
	}


	void display()
	{
		Node* temp;
		if(top == NULL) {
			cout<<"Stack Underflow";
			return;
		}
		else
        {
            temp = top;
			while(temp != NULL)
			{
				cout<<temp->data<<" ";
				temp = temp->next;
			}
		}
		cout<<endl;
	}

};


int main()
{
	Stack n;

	n.push(45);
	n.push(60);
	n.push(93);
	n.push(71);
	n.push(35);
	n.pop();
	n.display();

	cout<<"Top element is "<<n.Top()<<endl;

	getch();
}
