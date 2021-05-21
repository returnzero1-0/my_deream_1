#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define MAX 10
int count=0;

// create structure of stack
struct stack
{
	int items[MAX];
	int top;
};

// Rename the stack as 'st' for esay to type
typedef struct stack st;	


// Initialization or Creation of Stack
void createEmptyStack(st *s)
{
	s->top=-1;
}

// check if stack is empty or not (Underflow)
int isEmpty(st *s)
{
	if(s->top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

// check if stack is full or not (overflow)
int isFull(st *s)
{
	if(s->top==MAX-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

// push the element (insert into stack)
void push(st *s,int insertItem)
{
	if(isFull(s))
	{
		printf("\nStack is Not having space\n");
	}
	else
	{
		s->top++;
		s->items[s->top]=insertItem;
	}
	count++;
}

// pop the element (delete from stack)
void pop(st *s)
{
	if(isEmpty(s))
	{
		printf("\nStack is Already Empty!\n");
	}
	else
	{
		s->top--;
		printf("\nElement has been removed =>%d",s->items[s->top]);
	}
	count--;
	printf("\n");
}

// Print stack elements
void printStack(st *s)
{
	if(isEmpty(s))
	{
		printf("\nNo Element to print\n");
	}
	else
	{
		int i;
		printf("\nStack:\n");
		for(i=0;i<count;i++)
		{
			printf("%d ",s->items[i]);
		}
	}
	printf("\n");
}

// Main Function

int main()
{
	st *s=(st *)malloc(sizeof(st));	
	
	createEmptyStack(s);		// This is main line initialize your stack
		
	int ch;
	printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\nEnter your choice:");
	scanf("%d",&ch);
	
	switch(ch)
	{
		int item,ele;
		case 1:
			printf("Enter number of element want to enter:");
			scanf("%d",&ele);

			while(ele!=0)
			{
				printf("\nEnter element:");
				scanf("%d",&item);
				push(s,item);
				ele--;
			}
			break;
		case 2:
			printf("Enter number of element want to delete:");
			scanf("%d",&ele);
			
		
	}
}	


