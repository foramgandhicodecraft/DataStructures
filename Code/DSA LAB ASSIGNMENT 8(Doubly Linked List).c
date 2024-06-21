#include<stdio.h>
#include<stdlib.h>

//CREATE AND DISPLAY DOUBLY LINKED LIST
struct node{
	int data;
	struct node* next;
	struct node* prev;
}*start,*last,*temp;

int create(int a[],int n){
	int i;
	start=(struct node*)malloc(8);
	start->data=a[0];
	start->prev=NULL;
	start->next=NULL;
	last=start;
	for(i=1;i<n;i++){
		temp=(struct node*)malloc(8);
		temp->data=a[i];
		temp->prev=last;
		temp->next=NULL;
		last->next=temp;
		last=temp;
	}
}

void display(struct node* p){
	while(p!=NULL){
		printf("%d ",p->data);
		p=p->next;
	}
	p=last;
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->prev;
	}
}

int main(){
	int a[5]={1,2,3,4,5};
	create(a,5);
	display(start);
	return 0;
}

//INSERT AT BEGINNING
/*struct node{
	int data;
	struct node* next;
	struct node* prev;
}*start,*last,*temp,*n;

int create(int a[],int n){
	int i;
	start=(struct node*)malloc(8);
	start->data=a[0];
	start->prev=NULL;
	start->next=NULL;
	last=start;
	for(i=1;i<n;i++){
		temp=(struct node*)malloc(8);
		temp->data=a[i];
		temp->prev=last;
		temp->next=NULL;
		last->next=temp;
		last=temp;
	}
}

void display(struct node* p){
	while(p!=NULL){
		printf("%d ",p->data);
		p=p->next;
	}
}

int main(){
	int a[5]={1,2,3,4,5};
	int m;
	n=(struct node*)malloc(8);
	printf("Enter data to insert at first position:");
	scanf("%d",&m);
	create(a,5);
	n->data=m;
	n->prev=NULL;
	n->next=start;
	start=n;
	display(start);
	return 0;
}*/

//INSERT AT END
/*struct node{
	int data;
	struct node* next;
	struct node* prev;
}*start,*last,*temp,*n,*p;

int create(int a[],int n){
	int i;
	start=(struct node*)malloc(8);
	start->data=a[0];
	start->prev=NULL;
	start->next=NULL;
	last=start;
	for(i=1;i<n;i++){
		temp=(struct node*)malloc(8);
		temp->data=a[i];
		temp->prev=last;
		temp->next=NULL;
		last->next=temp;
		last=temp;
	}
}

void display(struct node* p){
	while(p!=NULL){
		printf("%d ",p->data);
		p=p->next;
	}
}

int main(){
	int a[5]={1,2,3,4,5};
	int m;
	n=(struct node*)malloc(8);
	printf("Enter data to insert at last position:");
	scanf("%d",&m);
	create(a,5);
	n->data=m;
	n->prev=last;
	last->next=n;
	n->next=NULL;
	display(start);
	return 0;
}*/

//INSERT AT ANY POSITION
/*struct node{
	int data;
	struct node* next;
	struct node* prev;
}*start,*last,*temp,*n,*p,*r;

int create(int a[],int n){
	int i;
	start=(struct node*)malloc(8);
	start->data=a[0];
	start->prev=NULL;
	start->next=NULL;
	last=start;
	for(i=1;i<n;i++){
		temp=(struct node*)malloc(8);
		temp->data=a[i];
		temp->prev=last;
		temp->next=NULL;
		last->next=temp;
		last=temp;
	}
}

void display(struct node* p){
	while(p!=NULL){
		printf("%d ",p->data);
		p=p->next;
	}
}

int main(){
	int a[5]={1,2,3,4,5};
	int m,pos,i=0;
	n=(struct node*)malloc(8);
	printf("Enter positon after which you want to insert:");
	scanf("%d",&pos);
	printf("Enter data to insert at the random position:");
	scanf("%d",&m);
	create(a,5);
	r=start;
	for(i=0;i<pos-1;i++){
		r=r->next;
	}
	n->data=m;
	r->next->prev=n;
	n->next=r->next;
	r->next=n;
	n->prev=r;
	display(start);
	return 0;
}*/

//DELETE FROM FIRST POSITION
/*struct node{
	int data;
	struct node* next;
	struct node* prev;
}*start,*last,*temp,*n;

int create(int a[],int n){
	int i;
	start=(struct node*)malloc(8);
	start->data=a[0];
	start->prev=NULL;
	start->next=NULL;
	last=start;
	for(i=1;i<n;i++){
		temp=(struct node*)malloc(8);
		temp->data=a[i];
		temp->prev=last;
		temp->next=NULL;
		last->next=temp;
		last=temp;
	}
}

void display(struct node* p){
	while(p!=NULL){
		printf("%d ",p->data);
		p=p->next;
	}
}

int main(){
	int a[5]={1,2,3,4,5};
	int m;
	n=(struct node*)malloc(8);
	create(a,5);
	start=start->next;
	display(start);
	return 0;
}*/

//DELETE FROM END POSITION
/*struct node{
	int data;
	struct node* next;
	struct node* prev;
}*start,*last,*temp,*n;

int create(int a[],int n){
	int i;
	start=(struct node*)malloc(8);
	start->data=a[0];
	start->prev=NULL;
	start->next=NULL;
	last=start;
	for(i=1;i<n;i++){
		temp=(struct node*)malloc(8);
		temp->data=a[i];
		temp->prev=last;
		temp->next=NULL;
		last->next=temp;
		last=temp;
	}
}

void display(struct node* p){
	while(p!=NULL){
		printf("%d ",p->data);
		p=p->next;
	}
}

int main(){
	int a[5]={1,2,3,4,5};
	int m;
	n=(struct node*)malloc(8);
	create(a,5);
    last=last->prev;
    last->next=NULL;
	display(start);
	return 0;
}*/

//DELETE FROM ANY POSITION
/*struct node{
	int data;
	struct node* next;
	struct node* prev;
}*start,*last,*temp,*q,*r;

int create(int a[],int n){
	int i;
	start=(struct node*)malloc(8);
	start->data=a[0];
	start->prev=NULL;
	start->next=NULL;
	last=start;
	for(i=1;i<n;i++){
		temp=(struct node*)malloc(8);
		temp->data=a[i];
		temp->prev=last;
		temp->next=NULL;
		last->next=temp;
		last=temp;
	}
}

void display(struct node* p){
	while(p!=NULL){
		printf("%d ",p->data);
		p=p->next;
	}
}

int main(){
	int a[5]={1,2,3,4,5};
	int m,pos,i;
	printf("Enter position at which you want to delete data:");
	scanf("%d",&pos);
	create(a,5);
	r=start;
	q=NULL;
	for(i=0;i<pos-1;i++){
		q=r;
		r=r->next;
	}
	q->next=r->next;
	r->next->prev=q;
	display(start);
	return 0;
}*/

//SEARCH FOR AN ELEMENT
/*struct node{
	int data;
	struct node* next;
	struct node* prev;
}*start,*last,*temp,*p;

int create(int a[],int n){
	int i;
	start=(struct node*)malloc(8);
	start->data=a[0];
	start->prev=NULL;
	start->next=NULL;
	last=start;
	for(i=1;i<n;i++){
		temp=(struct node*)malloc(8);
		temp->data=a[i];
		temp->prev=last;
		temp->next=NULL;
		last->next=temp;
		last=temp;
	}
}

int main(){
	int a[5]={1,2,3,4,5};
	int x;
	printf("Enter number to search:");
	scanf("%d",&x);
	create(a,5);
	p=start;
	int pos=1;
	while(p!=NULL){
		if(p->data==x){
			printf("The number is present in linked list at position:%d",pos);
			break;
		}
		else{
			p=p->next;
			pos++;
		}
	}
	return 0;
}*/
