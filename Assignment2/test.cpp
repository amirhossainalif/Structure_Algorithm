#include<iostream>
#include<conio.h>
#include"mySTL.h"
using namespace std;


int main()
{
	SingleLinkedList sl;
	Node* head = NULL;

	cout<<"--------------------1.In Single Linked List----------------- "<<endl;

	cout<<"After inserting at first - "<<endl;
	sl.InsertAtHead(5);
	sl.InsertAtHead(6);
	sl.InsertAtHead(7);
	sl.InsertAtHead(8);
	sl.Traverse();

	cout<<endl;

	cout<<"After inserting at last - "<<endl;
	sl.InserAtTail(9);
	sl.InserAtTail(10);
	sl.Traverse();

	cout<<endl;

	cout<<"After inserting at any position - "<<endl;
	sl.InserAtAnyPosition(2, 11);
	sl.Traverse();

	cout<<endl;

	cout<<"After inserting before element - "<<endl;
	sl.insertBeforeElement(head,4);
	sl.Traverse();

	cout<<endl;

	cout<<"After delete Element By Value - "<<endl;
	sl.Delete(5);
	sl.Traverse();

	cout<<endl;

	cout<<"After delete at any position - "<<endl;
	sl.deleteAtAnyNode(&head,3);
	sl.Traverse();

	cout<<endl;

    cout<<"Displaying the list - "<<endl;
    sl.Traverse();

  	cout<<endl;
    cout<<endl;

    cout<<"--------------------2.In Double Linked List----------------- "<<endl;

    DoubleLinkedList dl;

    cout<<"After inserting at first - "<<endl;
    dl.InsertAtHead(1);
    dl.InsertAtHead(2);
    dl.InsertAtHead(3);
    dl.InsertAtHead(4);
    dl.InsertAtHead(5);
    dl.InsertAtHead(6);
    dl.Traverse();

    cout<<endl;

    cout<<"After inserting at last - "<<endl;
    dl.InsertAtTail(8);
    dl.Traverse();

    cout<<endl;

    cout<<"After inserting at any position - "<<endl;
    dl.InsertAtAnyPosition(2, 10);
    dl.Traverse();

    cout<<endl;


    cout<<"After inserting before element - "<<endl;
    dl.insertBeforeElement(head,9);
    dl.Traverse();

    cout<<endl;

    cout<<"After delete Element By Value - "<<endl;
    dl.Delete(2);
    dl.Traverse();

    cout<<endl;

    cout<<"After delete at any position - "<<endl;
    dl.deleteAtAnyPosition(&head,2);
    dl.Traverse();

    cout<<endl;

    cout<<"Displaying the list - "<<endl;
    dl.Traverse();

    cout<<endl;
    cout<<endl;

    cout<<"--------------------3.In Stack by Linked List----------------- "<<endl;
    Stack s;

    s.push(11);
    s.push(22);
    s.push(33);
    s.push(44);

    s.display();

    cout << "\nTop element is " << s.topElement() << endl;

    s.pop();

    cout << endl;

    s.display();

    cout << "\nTop element is " << s.topElement()<< endl;

    cout << endl;
    cout<<endl;


    cout<<"--------------------4.In Queue by Linked List----------------- "<<endl;
    Queue q;
    q.enQueue(10);
    q.enQueue(20);

    q.deQueue();

    q.enQueue(30);
    q.enQueue(40);

    q.deQueue();

    q.enQueue(50);
    q.enQueue(60);

    cout << "Queue Front : " << (q.front)->data << endl;
    cout << endl;
    cout << "Queue Rear : " << (q.rear)->data<< endl;


    cout << endl;
    cout << endl;

    cout<<"--------------------5.In Binary Search Tree----------------- "<<endl;

    Node* root = NULL;

    BST b;

    root = b.insertBST(root, 33);
    b.insertBST(root,29);
    b.insertBST(root,12);
    b.insertBST(root,79);
    b.insertBST(root,52);
    b.insertBST(root,41);
    b.insertBST(root,56);
    b.insertBST(root,80);
    b.insertBST(root,59);

    cout<<"DISPLAYING THE INORDER TRAVERSAl : ";
    b.inorder(root);
    cout<<endl;
    cout<<endl;

    cout<<"DISPLAYING THE PREORDER TRAVERSAl : ";
    b.PreOrder(root);
    cout<<endl;
    cout<<endl;

    cout<<"DISPLAYING THE POSTORDER TRAVERSAl : ";
    b.PostOrder(root);
    cout<<endl;
    cout<<endl;

    cout<<"Searching for 79 in the BStree : ";
    if(b.searchInBST(root,79)==NULL)
    {
        cout<<"key doesn't exist"<<endl;
    }
    else
    {
        cout<<"key exist"<<endl;
    }



    getch();

}


