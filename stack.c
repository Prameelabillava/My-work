#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define SIZE 5
int stack[SIZE];
int top=-1,elem,item;
int isEmpty()
{
	if(top==-1)
	return 1;
	else
	return 0;
}
int isFull()
{
	if(top>=(SIZE-1))
	return 1;
	else
	return 0;
}
void push(int elem)
{
	if(isFull())
	{
		printf("stack is full: Overflow\n");
		return ;
	}
	top++;
	stack[top]=elem;
}
int pop()
{
	int items;
	if(isEmpty())
{
		return -999;
	}
	item=stack[top];
	top--;
	return item;
}
void display()
{
	int i;
	if( isEmpty())
	{
		printf("stack is empty\n");
		return;
	}
	for(i=top;i>=0;i--)
{
	printf("%d\n",stack[i]);
}
}
void isPalindrome(int elem)
{
	int rem,num,digit,res=0,i=0;
	top=-1;
	num=elem;
	while(elem>0)
	{
		rem=elem%10;
		elem=elem/10;
		push(rem);
}
	while((digit=pop())!=-999)
	{
		res=res+digit*pow(10,i);
		i++;
	}
	if(num==res)
	printf("Palindrome number\n");
	else
	printf("Not a palindrome number\n");
}
void main()
{
	int choice,a,b,c;
	char cont;
	do
	{
		printf("1.Push\n 2.Pop\n 3.Palindrome\n 4.Display\n 5.exit\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("Enter the element\n");
				scanf("%d",&a);
				push(a);
				break;
	           	case 2:c=pop();
	                       printf("Pop element is=%d\n",c);
	                      	if(c==-999)
			  	printf("Stack is empty: Underflow\n");
			  	break;
 			case 3:printf("Enter the element\n");
			  	scanf("%d",&b);
			 	 isPalindrome(b);
			  	break;
                     	case 4:printf("Elements are\n");
			 	display();
				 break;
	 		default:exit(0);
    		}
   		 printf("Do you want to continue press Y/N\n");
    		scanf("\n%c",&cont);
			
     	  }while(cont=='y');
}
