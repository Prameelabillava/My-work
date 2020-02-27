#include<stdio.h>
#include<stdlib.h>
#define MAX 4
int cq[MAX];
int front=-1,rear =-1;	
int isFull()
{
	if(front==(rear+1)%MAX)
	return 1;
	else
	return 0;
}
int isEmpty()
{
	if(front==-1)
	return 1;
	else
	return 0;
}
void cq_insert(int ele)
{
	if(isFull())
	{
		printf("circular quee is full");
		return;
	}
	if(rear==-1)
	{
		front=rear=0;
		cq[rear]=ele;
		return;
	}
	else
	{
		rear=(rear+1)%MAX;
		cq[rear]=ele;
	}
}
int cq_delete()
{
	int x;
	if(isEmpty())
	{
		printf("circular  queue is empty\n");
		return -999;
	}
	if(front==rear)
	{
		x=cq[front];
		front=rear=-1;
		return x;
	}
	else
	{

		x=cq[front];
		front=(front+1)%MAX;
		return x;
	}
}
void display()
{
	int i ;
	if(isEmpty())
	{
		printf("circular queue is empty\n");
		return;
	}
		for(i=front;i!=rear; )
		{
			printf("%d\t",cq[i]);
			i=(i+1)%MAX;
		}
			printf("%d\t",cq[i]);
}
void main()
{
	int choice,a,b;
	char cont;
	do
	{
		printf("1.insert\n 2.delete\n 3.display\n 4.exit\n");
		printf("enter your choice \n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("enter the element \n");
				scanf("%d",&a);
				cq_insert(a);
				break;
			case 2: b=cq_delete();
				if(b==-999)
				printf("queue is empty\n");
				else
				printf("deleted element  is %d",b);
				break;
			case 3: printf("the elements are :\n");
				display();
				break;
			default :exit(0);
		}
			printf("\n if you want to continue y/n \n");
			scanf("\n %c",&cont);
	}while(cont=='y');
}

