#include<stdio.h>
#include<string.h>

//Q1-QUEUE USING TWO STACK
/*#define size 10

struct stack1{
	int top1;
	int v1[size];
}s1;

struct stack2{
	int top2;
	int v2[size];
}s2;

int pushs1(int m){
	if(s1.top1==size){
		printf("Stack overload");
	}
	else{
		s1.top1++;
		s1.v1[s1.top1]=m;
	}
}

int pushs2(int p){
	if(s2.top2==size){
		printf("Stack overload");
	}
	else{
		s2.top2++;
		s2.v2[s2.top2]=p;
	}
}

int pops1(){
	int x;
	if(s1.top1==-1){
		printf("Stack underflow");
	}
	else{
		x=s1.v1[s1.top1];
		s1.top1--;
		return x;
	}
}

int pops2(){
	int x;
	if(s2.top2==-1){
		printf("Stack underflow");
	}
	else{
		x=s2.v2[s2.top2];
		s2.top2--;
		return x;
	}
}

int main(){
	int num,m,n,i,p,q,r,e;
	s1.top1=-1;
	s2.top2=-1;
	for(i=0;i<size;i++){
	printf("\nPress\n1.For insertion(enqueue)\n2.For deletion(dequeue)\n");
	scanf("\n%d",&num);
	switch(num){
		case 1:
			{
				printf("Enter number of values to enqueue:");
				scanf("%d",&e);
				printf("Enter value to enqueue:");
				for(i=0;i<e;i++){
				scanf("%d",&m);
				pushs1(m);
			}
				break;
			}
		case 2:
			{
				printf("Enter number of elements to dequeue:");
				scanf("%d",&n);
				int t=s1.top1;
				for(i=s1.top1;i>=0;i--){
					p=pops1();
					pushs2(p);
				}
				for(i=0;i<n;i++){
					q=pops2();
					printf("%d ",q);
				}
				for(i=n;i<=t;i++){
					r=pops2();
					pushs1(r);
				}
				break;
			}
	}
}
	return 0;
}*/


//Q2-NORMAL QUEUE
/*#define size 5
struct queue{
	int rear;
	int front;
	int q[size];
}Q;

void enqueue(int x){
	if(Q.rear==size-1){
		printf("Queue overflow");
	}
	else{
		Q.rear++;
		Q.q[Q.rear]=x;
	}
}

int dequeue(){
	if(Q.front==Q.rear){
		printf("Queue is empty");
	}
	else{
		int x=-1;
		Q.front++;
		x=Q.q[Q.front];
		return x;
	}
}

int main(){
	int i,v,x,y;
	Q.rear=-1;
	Q.front=-1;
	printf("\nEnter queue values:");
	for(i=0;i<size;i++){
		scanf("%d",&x);
		enqueue(x);
	}
	printf("Enter values to be deleted from queue:");
	scanf("%d",&v);
	for(i=0;i<v;i++){
		y=dequeue();
		printf("%d ",y);
	}
}*/

//Q3-CIRCULAR QUEUE
/*#define size 5
struct queue{
	int front;
	int rear;
	int q[size];
}Q;
void enqueue(int x){
	if((Q.rear+1)%size==Q.front){
		printf("Queue is full");
	}
	else{
		Q.rear=(Q.rear+1)%size;
		Q.q[Q.rear]=x;
	}
}
int dequeue(){
	int x;
	if(Q.front==Q.rear){
		printf("Queue is empty");
	}
	else{
		Q.front=(Q.front+1)%size;
		x=Q.q[Q.front];
		return x;
	}
}
int main(){
	int n,e,i,y,x;
	Q.front=0;
	Q.rear=0;
	printf("Enter number of orders:");
	scanf("%d",&n);
	printf("Enter order:");
	for(i=0;i<n;i++){
		scanf("%d",&x);
		enqueue(x);
	}
	printf("Enter number of orders you want to see:");
	scanf("%d",&e);
	for(i=0;i<e;i++){
		y=dequeue();
		printf("%d",y);
	}
}*/

//Q4-PALINDROME USING DEQUEUE
#define size 20
struct dequeue{
	int rear;
	int f1,f2;
	char deq[size];
}dq;

char push(char str){
		dq.rear++;
		dq.deq[dq.rear]=str;
		printf("%c",dq.deq[dq.rear]);
}

char pop1(){
	char x;
	dq.f1++;
	x=dq.deq[dq.f1];
	return x;
}

char pop2(){
	char y;
	dq.f2--;
	y=dq.deq[dq.f2];
	return y;
}

int main(){
	int i,count,m;
	char str[20];
	char x,y;
	printf("Enter string to be checked:");
	scanf("%s",str);
	m=strlen(str);
	for(i=0;i<m;i++){
		push(str[i]);
	}
	dq.f1=-1;
	dq.f2=m;
	if(m%2==0){
		for(i=0;i<(m/2);i++){
			x=pop1();
			//printf("%c\n",x);
			y=pop2();
			//printf("\n%c",y);
			if(x==y){
				count++;
			}
		}
		if(count==(m/2)){
			printf("\nIt is a palindrome");
		}
	
		else
		printf("\nNot a palindrome");
	}
	else{
		for(i=0;i<=((m-1)/2);i++){
			x=pop1();
			y=pop2();
			if(x==y){
				count++;
			}
		}
		if(count==((m-1)/2)){
			printf("\nIt is a palindrome");
		}
		else
		printf("\nNot a palindrome");
	}
	return 0;
}
