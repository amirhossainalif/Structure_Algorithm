#include<iostream>
#include<conio.h>
using namespace std;

struct BstNode
{
	int data;
	BstNode* left;
	BstNode* right;

};

BstNode* root;

BstNode* GetNewNode(int data)
{
	BstNode* NewNode = new BstNode();
	NewNode->data = data;
	NewNode->left = NULL;
	NewNode->right = NULL;
	return NewNode;
}

void PreOrder(BstNode* root)
{
	if(root == NULL)
	{
		return;
	}
	cout<<root->data<<" ";

	PreOrder(root->left);
	PreOrder(root->right);
}

void InOrder(BstNode* root)
{
    if(root!=NULL)
	{
		InOrder(root->left);

		cout<<root->data<<" ";

        InOrder(root->right);
	}
}

void PostOrder(BstNode* root)
{
    if(root == NULL)
	{
		return;
	}

	PostOrder(root->left);
    PostOrder(root->right);

	cout<<root->data<<" ";
}



BstNode* Insert(BstNode* root, int data)
{
	if(root == NULL)
	{
		root = GetNewNode(data);
	}
	else if(data <= root->data)
	{
		root->left = Insert(root->left, data);
	}
	else
	{
		root->right = Insert(root->right, data);
	}
	return root;
}

bool Search(BstNode* root, int data)
{
	if(root == NULL)
	{
		return false;
	}
	else if(root->data == data)
	{
		return true;
	}
	else if(data <= root->data)
	{
		return Search(root->left, data);
	}
	else
	{
		return Search(root->right, data);
	}
}

int main()
{
	root = NULL;
	root = Insert(root, 55);
	root = Insert(root, 90);
	root = Insert(root, 47);
	root = Insert(root, 73);
	root = Insert(root, 23);
	root = Insert(root, 80);

	cout<<"please enter your search item: ";
	int s;
	cin>>s;
	cout<<endl;
	if(Search(root, s) == true)
	{
		cout<<"found"<<endl;
	}
	else
	{
		cout<<"Not found"<<endl<<endl;
	}

	cout<<"In order: ";
	InOrder(root);
	cout<<endl;

	cout<<"PreOrder: ";
	PreOrder(root);
	cout<<endl;

	cout<<"Post order: ";
	PostOrder(root);
	cout<<endl;

	getch();
}

