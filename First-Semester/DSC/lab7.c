//BINARY SEARCH TREE
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left,*right;
}*root=NULL;
struct node *get_node(int a)
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=a;
	temp->left=NULL;
	temp->right=NULL;
}
struct node *insert(struct node *root,int data)
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
void inorder(struct node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d-->",root->data);
		inorder(root->right);
	}
}
void postorder(struct node *root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d-->",root->data);
	}
}
void preorder(struct node *temp)
{
	if(temp!=NULL)
	{
		printf("%d-->",temp->data);
		preorder(temp->left);
		preorder(temp->right);
	}
}
void levelorder(struct node *root)
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
struct node *search(struct node *root,int key)
{
	if(root==NULL)
	{
		return root;
	}
	else if(key==root->data)
	{
		printf("the searched key is found: %d\n",root->data);
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
void main()
{
	int ch,e,key;
	printf("enter the root element\n");
	scanf("%d",&e);
	root=insert(root,e);
	printf("the root element is:%d\n",root->data);
	while(1)
	{
		printf("\n1-->insert\n2-->inorder traversal\n3-->preorder traversal\n4-->postorder traversal\n5-->levelorder\n6-->searching element\n");
		printf("7-->exit\n");
		printf("enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter the element to be inserted\n");
				scanf("%d",&e);
				insert(root,e);
				break;
			case 2:
				inorder(root);
				break;
			case 3:
				preorder(root);
				break;
			case 4:
				postorder(root);
				break;
			case 5:
				printf("%d-->",root->data);
				levelorder(root);
				break;
			case 6:
				printf("enter the key to be searched\n");
				scanf("%d",&key);
				search(root,key);
				break;
			case 7:
				exit(0);
			default:
				printf("wrong input\n");
		}
	}
}
