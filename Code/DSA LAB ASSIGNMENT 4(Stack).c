#include<stdio.h>
#include<string.h>

//FINAL CODE OF STACK WITHOUT ANY ERRORS
//CODE TO REVERSE INTEGERS
/*int push(int arr[5],int top){
		int y;
		if(top==5){
			printf("Error");
		}
		else{
			scanf("%d",&y);
			arr[top]=y;
		}
	}
	
int pop(int arr[5],int top){
		int x=-1;
		if(top==-1){
			printf("Error");
		}
		else{
			x=arr[top];
			printf("%d ",x);
		}
	}
	
int main(){
	int top=-1;
	int i;
	int arr[5];
	for(i=0;i<5;i++){
		top++;
		push(arr,top);
	}
	for(i=4;i>=0;i--){
		pop(arr,top);
		top--;
	}
}*/


//REVERSE A STRING USING STACK
/*char push(char arr[5],int top){
		char y;
		if(top==5){
			printf("Error");
		}
		else{
			scanf("%c",&y);
			arr[top]=y;
		}
	}
	
char pop(char arr[5],int top){
		if(top==-1){
			printf("Error");
		}
		else{
			char x;
			x=arr[top];
			printf("%c",x);
		}
	}
	
int main(){
	int top=-1;
	int i;
	char arr[5];
	for(i=0;i<5;i++){
		top++;
		push(arr,top);
	}
	for(i=4;i>=0;i--){
		pop(arr,top);
		top--;
	}
}*/


//CHECK PALINDROME USING STACK
/*char push(char arr[5],int top){
		char y;
		if(top==5){
			printf("Error");
		}
		else{
			scanf("%c",&y);
			arr[top]=y;
		}
		return arr[top];
	}
	
char pop(char arr2[5],int top){
	    char x;
		if(top==-1){
			printf("Error");
		}
		else{
			x=arr2[top];
		}
		return x;
	}
	
int main(){
	int top=-1;
	int i;
	char arr[5],arr2[5];
	printf("Enter string:");
	for(i=0;i<5;i++){
		top++;
	arr[i]=push(arr,top);
	}
	for(i=4;i>=0;i--){
	arr2[i]=pop(arr,top);
		top--;
	}
	for(i=0;i<5;i++){
	if(arr[i]!=arr2[i]){
	printf("Not palindrome");
	break;
	}}
	  
	  printf(" palindrome");

}*/


//CHECK PARENTHESIS MATCHING USING STACK
//at end of expression the stack must be empty
/*#define max 100
struct st{
	int top;
	char stack[max];
}s;
void push(char item){
	if(s.top!=max){
		s.stack[s.top]=item;
	}
	else
	return 0;
}
int pop(){
	if(s.top==-1){
		printf("Stack is empty");
	}
	else{
	    s.top=s.top-1;
	    return s.top;
	}
}
int check_matching_pair(char val1,char val2){
	if(val1=='(' && val2==')' || val1=='[' && val2==']' || val1=='{' && val2=='}')
	return 1;
	else
	return 0;
}
int main(){
	char exp[max]="{}[]()";
	char d;
	int i=0,size,end;
	size=strlen(exp);
	s.top=-1;
	for(i=0;i<size;i++){//last character will be \0
		if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
		{
			s.top=s.top+1;
			push(exp[i]);
		}
		else{
			if((check_matching_pair(s.stack[s.top],exp[i])))
			{
			end=pop();
			}
		}
	}
	if(end==-1)
	{
		printf("Balanced Parenthesis");
	}
	else
	printf("\nNot balanced Paranthesis");
}*/


//INFIX TO POSTFIX
#define max 100
struct stackk{
	int top;
	int stack[max];
}s;
void push(char item){
	if(s.top==max){
		printf("Stack is full");
	}
	else{
	s.top++;
	s.stack[s.top]=item;
    }
}
char pop(){
	if(s.top==-1){
		printf("Stack underflow");
	}
	else{
		return s.stack[s.top];
	}
}
int precedence(char operate){//higher the return value,higher will be the precedence
	if(operate=='*'||operate=='/')
	return 2;
	else if(operate=='+'||operate=='-')
	return 1;
	else
	return 0;
}
int isoperand(char operand){
	if((operand>='a'&&operand<='z') || (operand>='A'&&operand<='Z')){
		return 1;
	}
	else
	return 0;
}
int main(){
	int i=0,j=0,size;
	s.top=-1;
	char infix[7]="a-b*c+d";
	size=strlen(infix);
	char postfix[max],y;
	for(i=0;i<size;i++){
		if(isoperand(infix[i])){
			postfix[j]=infix[i];
			j++;
		}
		else{
			if(s.top!=-1)//for first operator
			{
			
			if(precedence(infix[i])>precedence(s.stack[s.top])){
				push(infix[i]);
			}
			else{
			postfix[j]=pop();
			s.top--;
			j++;
			push(infix[i]);	
			}}
			
			else
			push(infix[i]);
		}
	}
	while(s.top!=-1){
		postfix[j]=pop();
		s.top--;
		j++;
	}
	postfix[j]='\0';
	printf("%s",postfix);
	
}
