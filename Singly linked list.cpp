#include<iostream>
#include<conio.h>
using namespace std;


struct Node
{
	int data;
	Node* next;

};

Node* head;

Node* GetNewNode(int x)
{
	Node* NewNode = new Node();
	NewNode->data = x;
	NewNode->next = NULL;
	return NewNode;
}

void Traverse()
{
	Node* temp = head;
	cout<<"List is: ";
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

void InsertAtHead(int x)
{
	Node* NewNode= GetNewNode(x);
	NewNode->next= head;
	head= NewNode;

}

void InserAtAnyPosition(int n, int x)
{
	Node* NewNode = GetNewNode(x);
	if(n == 1)
	{
		NewNode->next= head;
		head =NewNode;
		return;
	}
	Node* temp = head;
	for(int i = 1; i < n - 1; i++)
	{
		temp = temp->next;
	}

	NewNode->next = temp->next;
	temp->next = NewNode;


}
void Search(int x)
{
	Node* temp = head;
	while(temp != NULL)
	{
		if(temp->data == x)
		{
			cout<<"Found"<<endl;
			return;
		}
		temp = temp->next;

	}
	cout<<"Not found"<<endl;
}

void Delete(int n)
{

	if(head == NULL)
	{
		cout<<"Error: Nothing to delete "<<endl;
		return;
	}
	Node* temp = head;
	if(n == 1)
	{
		head = temp->next;
		delete temp;
		return;
	}
	for(int i=1; i<n-1; i++)
	{
		temp = temp->next;
	}
	Node* temp2 = temp->next;
	temp->next = temp2->next;
	delete temp2;
	return;
}

void DeleteMid(int x)
{
    Node* toDelete=head;
    Node* prevNode;

    if(head==NULL)
    {
        cout<<"list is empty"<<endl;
    }
    else
    {
        toDelete=head;
        prevNode=head;

        for(int i=2; i<=x; i++)
        {
            prevNode= toDelete;
            toDelete=toDelete->next;

            if(toDelete==NULL)
            {
                break;
            }
        }

        if(toDelete!=NULL)
        {
            if(toDelete==head)
            {
                head=head->next;
            }

            prevNode->next=toDelete->next;
            toDelete->next=NULL;

            //free(toDelete);

            cout<<"Delete successfully"<<endl;
        }
        else{
            cout<<"invalid position"<<endl;
        }
    }

}

void Delete_at_last()
{
	Node* temp = head;
	Node* temp2 = temp;
	int i=0;
	while(temp->next != NULL)
	{
		if(i>0)
		{
			temp2 = temp2->next;
		}
		temp = temp->next;
		++i;
	}
	temp2->next = NULL;
	delete temp;

}

int main()
{
	head = NULL;
	InsertAtHead(2);
	InsertAtHead(4);
	InsertAtHead(6);
	InsertAtHead(8);
	InsertAtHead(10);
	InsertAtHead(12);
	InsertAtHead(14);
	Traverse();

	InserAtAnyPosition(3, 15);
	Traverse();
	Delete(5);
	Traverse();
	Search(11);
	Delete(1);
	Traverse();
    DeleteMid(3);
    Traverse();
	Delete_at_last();
	Traverse();
	Search(15);

	getch();
}

