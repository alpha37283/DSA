#include<bits/stdc++.h>
using namespace std;
class Node{
	public: 
		int data;
		Node *left;
		Node *right;
	
	Node(int data)
	{
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
	
};

//class Tree{
//	Node *root;
//	
//	Tree(int data)
//	{
//		this->root = new Node(data);
//	}
//};

Node* buildTree(Node * &root)
{
	int data;
	cout << "Enter a data : " ;
	cin >> data;
	root = new Node(data);
	
	if(data == -1)
	{
		return NULL;
	}
	
	cout << "Enter for left of : "<< data << endl;
	root->left = buildTree(root->left);
	
	cout << "Enter for right of : "<< data << endl;
	root->right = buildTree(root->right);
	
	return root;
	
}

void inorderTraversal(Node *root)
{
	if(root == NULL)
	{
		return ;
	}
	
	inorderTraversal(root->left);
	cout << root->data << " ";
	inorderTraversal(root->right);

}



void postorderTraversal(Node *root)
{
	if(root == NULL)
	{
		return ;
	}
	
	postorderTraversal(root->left);
	postorderTraversal(root->right);
	cout << root->data << endl;

	
	
}

void postorderTraversal(Node *root)
{
	if(root == NULL)
	{
		return ;
	}
}
int main()
{
	
	Node *root = NULL;
	root = buildTree(root);
	
	cout << "InOrderTraversal : ";
	inorderTraversal(root);
	
	cout << "PostOrderTraversal : ";
	postorderTraversal(root);
	
	cout << "PreOrderTraversal : ";
	
	
}
