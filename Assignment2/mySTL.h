#include<iostream>
#include <cstdlib>
using namespace std;


class Node
{
public:
    int data;
    Node* next;
    Node* prev;
    Node* link;
    Node* head;
    Node* left,*right;

    Node()
    {
        data=0;
        next=NULL;
        prev=NULL;
    }
    Node(int n)
    {
        this->data = n;
        this->link = NULL;
        this->left = NULL;
        this->right = NULL;
    }
};

struct QNode
{
    int data;
    QNode* next;
    QNode(int d)
    {
        data = d;
        next = NULL;
    }
};



class SingleLinkedList
{
public:

    Node* head;
    SingleLinkedList()
    {
        head=NULL;
    }

    Node* NewNode = new Node();

    void InsertAtHead(int x)
    {
        Node* NewNode = new Node();
        NewNode->data=x;
        NewNode->next = head;
        head = NewNode;
    }


    void InserAtTail(int x)
    {
        Node* NewNode = new Node();
        NewNode->data=x;
        if (head == NULL)
        {
            head = NewNode;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NewNode;
    }

    void InserAtAnyPosition(int n, int x)
    {
        Node* NewNode = new Node();
        NewNode->data=x;
        if (n == 1)
        {
            NewNode->next = head;
            head = NewNode;
            return;
        }
        Node* temp = head;
        for (int i = 1; i < n - 1; i++)
        {
            temp = temp->next;
        }

        NewNode->next = temp->next;
        temp->next = NewNode;
    }


    struct Node* insertBeforeElement(Node* given_ptr, int val)
    {

        if (head == given_ptr)
        {
            Node* n = new Node();
            n->data=val;
            n->next = head;
            head = n;
            return n;
        }
        else
        {
            Node *p, *n = head;
            for (n, p; n != given_ptr;
                    p = n, n = n->next);

            Node* m = new Node();
            m->data=val;
            m->next = p->next;
            p->next = m;

            return m;
        }
    }


    void Delete(int n)
    {

        if (head == NULL)
        {
            cout << "Error: Nothing to delete " << endl;
            return;
        }
        Node* temp = head;
        if (n == 1)
        {
            head = temp->next;
            delete temp;
            return;
        }
        for (int i = 1; i < n - 1; i++)
        {
            temp = temp->next;
        }
        Node* temp2 = temp->next;
        temp->next = temp2->next;
        delete temp2;
        return;
    }

    void deleteAtAnyNode(Node** head_ref, int position)
    {
        if (*head_ref == NULL)
            return;
        Node* temp = *head_ref;
        if (position == 0)
        {
            *head_ref = temp->next;
            free(temp);
            return;
        }

        for (int i = 0; temp != NULL && i < position - 1; i++)
            temp = temp->next;

        if (temp == NULL || temp->next == NULL)
            return;

        Node* next = temp->next->next;
        free(temp->next);
        temp->next = next;
    }

    int countOfNodes(struct Node* head)
    {
        int count = 0;
        while (head != NULL)
        {
            head = head->next;
            count++;
        }
        return count;
    }


    void Traverse()
    {
        Node* temp = head;
        cout << "List is: ";
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;

        }
        cout << endl;
    }
};


class DoubleLinkedList
{
public:
    Node* head;
    DoubleLinkedList()
    {
        head=NULL;
    }

    Node* NewNode = new Node();

    void InsertAtHead(int x)
    {
        Node* NewNode = new Node();
        NewNode->data=x;
        if (head == NULL)
        {
            head = NewNode;
            return;
        }
        head->prev = NewNode;
        NewNode->next = head;
        head = NewNode;
    }
    void InsertAtTail(int x)
    {
        Node* NewNode = new Node();
        NewNode->data=x;
        Node* temp = head;
        if (head == NULL)
        {
            head = NewNode;
            return;
        }
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NewNode;
        NewNode->prev = temp;
    }

    void InsertAtAnyPosition(int n, int x)
    {
        Node* NewNode = new Node();
        NewNode->data=x;
        if (n == 1)
        {
            NewNode->next = head;
            head = NewNode;
            return;

        }

        Node* temp1 = head;
        for (int i = 1; 1 < n - 1; i++)
        {
            temp1 = temp1->next;

        }
        NewNode->prev = temp1;
        NewNode->next = temp1->next;
        temp1->next = NewNode;
    }

    struct Node* insertBeforeElement(Node* given_ptr, int val)
    {

        if (head == given_ptr)
        {
            Node* n = new Node();
            n->data=val;
            n->next = head;
            head = n;
            return n;
        }
        else
        {
            Node *p, *n = head;
            for (n, p; n != given_ptr;
                    p = n, n = n->next);

            Node* m = new Node();
            m->data=val;
            m->prev=p;
            m->next = p->next;
            p->next = m;

            return m;
        }
    }

    void Delete(int n)
    {
        Node* temp = head;
        if (n == 1)
        {
            head = temp->next;
            head->prev = NULL;
            delete temp;
            return;
        }
        for (int i = 1; i < n - 1; i++)
        {
            temp = temp->next;
        }
        Node* temp2;
        temp2 = temp;
        temp2 = temp2->next;

        Node* temp3;
        temp3 = temp2;

        temp2 = temp2->next;
        temp2->prev = temp;
        temp->next = temp2;

        delete temp3;
    }

    void deleteAtAnyPosition(Node** head_ref, int position)
    {
        if (*head_ref == NULL)
            return;

        Node* temp = *head_ref;
        if (position == 0)
        {
            *head_ref = temp->next;
            free(temp);
            return;
        }

        for (int i = 0; temp != NULL && i < position - 1; i++)
            temp = temp->next;
        if (temp == NULL || temp->next == NULL)
            return;
        Node* next = temp->next->next;
        free(temp->next);
        temp->next = next;
    }


    void Traverse()
    {
        Node* temp = head;
        if (head == NULL)
        {
            cout << "Error: List is Empty " << endl;
            return;
        }
        cout << "Traverse List: " << " ";
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
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

        if (!temp)
        {
            cout << "\nStack Overflow";
            exit(1);
        }

        temp->data = data;

        temp->link = top;

        top = temp;
    }

    bool isEmpty()
    {

        return top == NULL;
    }

    int topElement()
    {

        if (!isEmpty())
            return top->data;
        else
            exit(1);
    }

    void pop()
    {
        Node* temp;

        if (top == NULL)
        {
            cout << "\nStack Underflow" << endl;
            exit(1);
        }
        else
        {

            temp = top;

            top = top->link;

            free(temp);
        }
    }

    void display()
    {
        Node* temp;

        if (top == NULL)
        {
            cout << "\nStack Underflow";
            exit(1);
        }
        else
        {
            temp = top;
            while (temp != NULL)
            {

                cout << temp->data;

                temp = temp->link;
                if (temp != NULL)
                    cout << " ";
            }
        }
    }
};

struct Queue
{
    QNode *front, *rear;
    Queue()
    {
        front = rear = NULL;
    }

    void enQueue(int x)
    {

        QNode* temp = new QNode(x);

        if (rear == NULL)
        {
            front = rear = temp;
            return;
        }

        rear->next = temp;
        rear = temp;
    }

    void deQueue()
    {

        if (front == NULL)
            return;

        QNode* temp = front;
        front = front->next;

        if (front == NULL)
            rear = NULL;

        delete (temp);
    }
};

class BST
{
public:
     Node* root = NULL;
    struct Node* insertBST(Node* root, int val)
    {
        if(root == NULL)
        {
            return new Node(val);
        }
        if(val<root->data)
        {
            root->left = insertBST(root->left,val);
        }
        else
        {
            root->right = insertBST(root->right,val);
        }
    }

    struct Node* searchInBST(Node* root,int key)
    {
        if(root==NULL)
        {
            return NULL;
        }
        if(root->data==key)
        {
            return root;
        }
        if(root->data>key)
        {
            return searchInBST(root->left,key);
        }
        else
        {
            return searchInBST(root->right,key);
        }
    }


    void inorder(Node* root)
    {
        if(root == NULL)
        {
            return;
        }
        inorder(root->left);
        cout<< root->data << " ";
        inorder(root->right);
    }

    void PreOrder(Node* root)
    {
        if (root == NULL)
        {
            return;
        }
        cout << root->data << " ";
        PreOrder(root->left);
        PreOrder(root->right);
    }

    void PostOrder(Node* root)
    {

        if (root == NULL)
        {
            return;
        }
        PostOrder(root->left);
        PostOrder(root->right);
        cout << root->data << " ";
    }

};
