#include<stdio.h>
#include<stdlib.h>
typedef struct BST{
	int data;
	struct BST *left,*right;
} node;

node *root;
node *get_node(int);
node *search(node *,int);
node *insert(node *,int);
void inorder(node *);
void preorder(node *);
void postorder(node *);
void levelorder(node *);
void main()
{
	int ch,key;
	int val;
	node* root=NULL;
	printf("program for Binary search Tree\n");
	printf("enter the root value: ");
	scanf("%d",&val);
	root=insert(root,val);
	printf("\n the root element is: %d\n  ",root->data);
	while(1)
	{
		printf("\n1-->create\n");
		printf("2-->traverse inorder\n");
		printf("3-->traverse preorder\n");
		printf("4-->traverse postorder\n");
		printf("5-->traverse levelorder\n");
		printf("6-->search\n");
		printf("7-->exit\n");
		printf("enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter elements: ");
				scanf("%d",&val);
				insert(root,val);
				break;
			case 2:
				printf("inorder traversal\n");
				inorder(root);
				break;
			case 3:
				printf("preorder traversal\n");
				preorder(root);
				break;
			case 4:
				printf("postorder traversal\n");
				postorder(root);
				break;
			case 5:
				printf("levelorder traversal\n");
				printf("%d\n",root->data);
				levelorder(root);
				break;
			case 6:
				printf("enter the element to be searched\n");
				scanf("%d",&key);
				search(root,key);
				break;
			case 7:
				exit(0);
				break;
			default:
				printf("wrong input\n");
		}
	}
}
node *get_node(int data)
{
	node *temp;
	temp=(node *)malloc(sizeof(node));
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
node *insert(node *root,int data)
{
	if(root==NULL)
	{
		root=get_node(data);
	}
	else if(data < root->data)
	{
		root->left=insert(root->left,data);
	}
	else
	{
		root->right=insert(root->right,data);
	}
}
node *search(node *root,int key)
{
	if(root==NULL)
	{
		return root;
	}
	else if(key==root->data)
	{
		printf("found data: %d\n",root->data);
	}
	else if(key < root->data)
	{
		return search(root->left,key);
	}
	else
	{
		return search(root->right,key);
	}
}

void inorder(node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d-->",root->data);
		inorder(root->right);
	}
}
void preorder(node *root)
{
	if(root!=NULL)
	{
		printf("%d-->",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(node *root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d-->",root->data);
	}
}
void levelorder(node *root)
{
	if(root==NULL)
	{
		return;
	}
	if(root->left!=NULL)
	{
		printf("%d-->",root->left->data);
	}
	if(root->right!=NULL)
	{
		printf("%d-->",root->right->data);
	}
	levelorder(root->left);
	levelorder(root->right);
}

