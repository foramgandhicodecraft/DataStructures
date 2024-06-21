#include<stdio.h>
#include<stdlib.h>

//Q1-Create a tree+3 traversal methods
/*#define size 5

struct Queue{
	int front;
	int rear;
	struct node* q[size];
}Q;

struct node{
	struct node* lchild;
	int data;
	struct node* rchild;
}*root,*temp,*p;

struct node* dequeue(){
	struct node* y;
	Q.front++;
	y=Q.q[Q.front];
	return y;
}

void enqueue(struct node* x){
	Q.rear++;
	Q.q[Q.rear]=x;
}

int isempty(struct Queue Q){
	return Q.front==Q.rear;
}

void create(int val){
	int x,w,z;
	root=(struct node*)malloc(12);
	root->data=val;
	root->lchild=root->rchild=NULL;
	enqueue(root);
	while(!isempty(Q)){
		p=dequeue();
		printf("Enter value of left child:");
		scanf("%d",&w);
		if(w!=-1){
			temp=(struct node*)malloc(12);
			temp->data=w;
			temp->lchild=temp->rchild=NULL;
			p->lchild=temp;
			enqueue(temp);
			temp=NULL;
		}
		printf("Enter value of right child:");
		scanf("%d",&z);
		if(z!=-1){
			temp=(struct node*)malloc(12);
			temp->data=z;
			temp->lchild=temp->rchild=NULL;
			p->rchild=temp;
			enqueue(temp);
			temp=NULL;
	    }
    }
}

void preorder(struct node* p){
	if(p){
		printf("%d ",p->data);
		preorder(p->lchild);
		preorder(p->rchild);
	}
	
}

void inorder(struct node* t)
{
	if(t!=NULL){
		inorder(t->lchild);
		printf("%d ",t->data);
		inorder(t->rchild);
	}
}

void postorder(struct node* t)
{
	if(t!=NULL)
	{
		postorder(t->lchild);
		postorder(t->rchild);
		printf("%d",t->data);

	}
}

int main()
{

	Q.front=-1;
	Q.rear=-1;
	create(1);
	preorder(root);
	return 0;
}*/

//Q2-INSERT IN BINARY SEARCH TREE
//INORDER TRAVERSAL WILL SORT THE ELEMENTS OF BINARY SEARCH TREE
/*struct node{
	int data;
	struct node* lchild;
	struct node* rchild;
}*root,*t,*r,*p;

void insert(int key)
{
	if(root==NULL)
	{
		root=(struct node*)malloc(sizeof(struct node));
		root->data=key;
		root->lchild=root->rchild=NULL;
		return;
	}
	t=root;
	r=NULL;
	while(t!=NULL)
	{
		r=t;
		if(key==t->data)
		return;
		else if(key<t->data)
		t=t->lchild;
		else
		t=t->rchild;
	}
	p=(struct node*)malloc(sizeof(struct node));
	p->data=key;
	p->rchild=NULL;
	p->lchild=NULL;
	if(p->data<r->data)
	r->lchild=p;
	else
	r->rchild=p;
}

void inorder(struct node* f)
{
	if(f)
	{
		inorder(f->lchild);
		printf("%d ",f->data);
		inorder(f->rchild);
	}
}

int main()
{
	insert(1);
	insert(11);
	insert(2);
	insert(5);
	insert(8);
	inorder(root);
	return 0;
}*/

//DELETION IN BINARY SEARCH TREE
struct node{
	int data;
	struct node* lchild;
	struct node* rchild;
}*root,*t,*r,*p,*q;

void insert(int key)
{
	if(root==NULL)
	{
		root=(struct node*)malloc(sizeof(struct node));
		root->data=key;
		root->lchild=root->rchild=NULL;
		return;
	}
	t=root;
	r=NULL;
	while(t!=NULL)
	{
		r=t;
		if(key==t->data)
		return;
		else if(key<t->data)
		t=t->lchild;
		else
		t=t->rchild;
	}
	p=(struct node*)malloc(sizeof(struct node));
	p->data=key;
	p->rchild=NULL;
	p->lchild=NULL;
	if(p->data<r->data)
	r->lchild=p;
	else
	r->rchild=p;
}

void inorder(struct node* f)
{
	if(f)
	{
		inorder(f->lchild);
		printf("%d ",f->data);
		inorder(f->rchild);
	}
}

int height(struct node *p){
	if (p==NULL)return 0;
	x=height(p->lchild);
	y=height(p->rchild);
	return x>y?x+1:y+1;
}

struct node *inpre(struct node *p){
	while(p && p->lchild!=NULL){
		p=p->rchild;
		return p;
	}
}

struct node *insuc(struct node *p){
	while(p && p->rchild!=NULL){
		p=p->lchild;
		return p;
	}
}

struct node* del(struct node* p,int key)
{
	if(p==NULL){
		return NULL;
	}
	
	if(p->lchild==NULL && p->rchild==NULL){
		if(p==root){
			root=NULL;
			free(p);
			return NULL;
		}
	}
	
	if(key<p->data)
	p->lchild=del(p->lchild,key);
	else if(key>p->data)
	p->rchild=del(p->rchild,key);
	else
	{
		if(height(p->lchild)>height(p->rchild)){
			q=InPre(p->lchild);
			p->data=q->data;
			p->lchild=del(p->lchild,q->data);
		}
		else{
			q=InSuc(p->rchild);
			p->data=q->data;
			p->rchild=del(p->rchild,q->data);
		}
	}
}

int main()
{
	insert(1);
	insert(11);
	insert(2);
	insert(5);
	insert(8);
	inorder(root);
	return 0;
}
