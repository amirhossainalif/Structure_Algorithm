#include<iostream>
#include<conio.h>
using namespace std;

struct Node
{
	int data;
	Node *next;

	Node(int x)
	{
		data = x;
		next = NULL;
	}
};

void print_list(Node *head)
{
	Node *start = head;

	while(start)
	{
		cout<<start->data<<" -> ";
		start = start->next;
	}
	cout<<endl;
}

void my_swap (Node *node_1, Node *node_2)
{
	int temp = node_1->data;
	node_1->data = node_2 -> data;
	node_2 -> data = temp;
}

void bubble_sort(Node *head)
{
	int swapped;

	Node *lPtr;
	Node *rPrt = NULL;
	do
	{
		swapped = 0;
		lPtr = head;
		while(lPtr->next != rPrt)
		{
			if (lPtr->data > lPtr->next->data)
			{
				my_swap(lPtr, lPtr->next);
                swapped = 1;
			}
			lPtr = lPtr->next;
		}
		rPrt = lPtr;

	}while(swapped);
}

int main()
{
	Node *head = new Node(3);
	head -> next = new Node(8);
	head -> next -> next = new Node(7);
	head -> next -> next -> next = new Node(1);
	head -> next -> next -> next  -> next = new Node(4);
	head -> next -> next -> next  -> next -> next = new Node(9);

	cout<<"The original list = "<<endl;
	print_list(head);


	bubble_sort(head);

	cout<<"The Sorted list = "<<endl;
	print_list(head);

	getch();
}
