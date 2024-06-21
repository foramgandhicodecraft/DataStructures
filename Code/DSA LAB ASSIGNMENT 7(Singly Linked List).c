#include<stdio.h>
#include<stdlib.h>

/*//Q1-REVERSE A LINKED LIST
struct node{
	int info;
	struct node* next;
}*first;

void create(int a[5],int n){
	struct node* temp,*last;
	int i;
	first=(struct node*)malloc(8);
	first->info=a[0];
	first->next=NULL;
	last=first;
	for(i=1;i<n;i++){
		temp=(struct node*)malloc(8);
		temp->info=a[i];
		temp->next=NULL;
		last->next=temp;
		last=temp;
	} 
}

int main(){
	int forward;
	int a[5]={1,2,3,4,5};
	create(a,5);
	int b[5]={};
	struct node* p;
	p=(struct node*)malloc(8);
	p=first;
	int i;
	//input from linked list to array
	while(p!=NULL){
		b[i]=p->info;
		p=p->next;
		i++;
	}
	p=first;
	i--;
	printf("%d\n",b[4]);
	//reverse input from array end to linked list
	while(p!=NULL){
		p->info=b[i];
		printf("%d",p->info);
		p=p->next;
		i--;
	}
	return 0;
}*/


//Q2-STACK USING LINKED LIST
//logic-delete and insert at first position of linked list
//NOTE-stack using linked list is FIRST INSERT FIRST DELETE

/*#define max 100

struct node{
	int data;
	struct node* next;
}*start,*n;

int main(){
	int num,m,i;
	int top=-1;
	for(m=0;m<100;m++){
	printf("Enter:\n1.To push element in stack\n2.To pop element from stack\n");
	scanf("%d",&num);
	switch(num){
		case 1:{
			if(top<max){
			
			if(i<1){
			    i++;
			    top++;
			    printf("Enter value to push:");
			    scanf("%d",&m);
			    start=(struct node*)malloc(8);
			    start->data=m;
			    start->next=NULL;
		    }
		    else{
		    	top++;
		    	n=(struct node*)malloc(8);
		    	printf("Enter value to push:");
		    	scanf("%d",&m);
		    	n->data=m;
		    	n->next=start;
		    	start=n;
		    	i++;
			}
		}
		else{
			printf("Stack overflow\n");
		}
			break;
		}
		case 2:{
			if(top!=-1){
				top--;
			printf("%d\n",start->data);
			start=start->next;
		}
		    else{
		    	printf("Stack underflow\n");
			}
			break;
		}
	}
}
}*/


//Q3-QUEUE USING LINKED LIST
//logic-insert from rare and delete from first position i.e front

/*#define max 100

struct node{
	int info;
	struct node* next;
}*start,*last,*temp;

int main(){
	int num,i,m,top=1,n;
	for(n=0;n<100;n++){
	printf("Enter:\n1.To enqueue element\n2.To dequeue element\n");
	scanf("%d",&num);
	switch(num){
		case 1:{
			if(i<max){
			if(i<1){
				i++;
				start=(struct node*)malloc(8);
				printf("Enter data to enqueue:");
				scanf("%d",&m);
				start->info=m;
				start->next=NULL;
				last=start;
			}
			else{
				i++;
				temp=(struct node*)malloc(8);
				printf("Enter data to enqueue:");
				scanf("%d",&m);
				temp->info=m;
				last->next=temp;
				last=temp;
			}
		}
		else{
			printf("Queue is full\n");
		}
			break;
		} 
		
		case 2:{
			if(top==i){
				printf("Queue is empty\n");
			}
			else{
				top++;
			    printf("Element dequeued=%d\n",start->info);
			    start=start->next;
		}
		    
			break;
		}
	}
}
	return 0;
}*/


//Q4

/*struct node{
	int data;
	struct node* next;
}*start,*last,*temp,*r;

int create(int a){
		temp=(struct node*)malloc(8);
		temp->data=a;
		temp->next=NULL;
		last->next=temp;
		last=temp;
}

int display(struct node* p){
	while(p!=NULL){
		printf("%d",p->data);
		p=p->next;
	}
} 

int main(){
	int x;
	printf("Enter three digit number:");
	scanf("%d",&x);
	int n,m,i;
	m=x%10;
	x=x/10;
	//Allocate the start node
	start=(struct node*)malloc(8);
	start->data=m;
	start->next=NULL;
	last=start;
	//Allocate the other 2 nodes
	for(n=0;n<2;n++){
		m=x%10;
		x=x/10;
		create(m);
	}
	//Reverse the list for display of number
	int b[3];
	r=start;
	while(r!=NULL){
		b[i]=r->data;
		r=r->next;
		i++;
	}
	r=start;
	i--;
	while(r!=NULL){
		r->data=b[i];
		r=r->next;
		i--;
	}
	//Display the nodes
	display(start);
	return 0;
}*/
