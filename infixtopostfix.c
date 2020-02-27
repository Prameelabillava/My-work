#include<stdio.h>
#include<stdlib.h>
#define SIZE 40
char infix[SIZE],postfix[SIZE];
char stack[SIZE];
int top= -1;
int stackp(char ch)
{
	switch(ch)
	{
		case '+' :
		case '-' :  return 2;
		case '*' :
		case '/' :  return 4;
		case '^' :  return 5;
		case '(' :  return 0;
		case '$' :  return -1;
		default  :  return 8;
	}
}
int inputp(char ch)
{
	switch(ch)
	{	
		case '+':
	      	case '-' : return 1;
	        case '%':
	    	case '*':
	    	case '/': return 3;
	    	case '^': return 6;
	    	case '(': return 9;
	    	case ')': return 0;
	   	default : return 7;
	}
}
void infixtopostfix()
{
	char ch;
	int i,j=0;
	top++;
	stack[top]='$';
	for(i=0;infix[i]!='\0';i++)
	{
		ch= infix[i];
		if(ch=='(' )
		{
			top++;
			stack[top]=ch;
			continue;
		}
		if(isalpha(ch) || isdigit(ch))
		{
			postfix[j]=ch;
			j++;
			continue;
		}
		if(ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='^' || ch=='%')
		{
			while(stackp(stack[top])>inputp(ch))
			{
				postfix[j]=stack[top];
				j++;
				top--;
			}
			if(stackp(stack[top])!=inputp(ch))
			{
				top++;
				stack[top]=ch;
				
			}
		}
			if(ch==')')
			{
				while(stack[top]!='(')
				{
					postfix[j]=stack[top];
					j++;
					top--;
				}
				top--;
			}
		}
		while(stack[top]!='$')
		{
			postfix[j]=stack[top];
			j++;
			top--;
		}
		postfix[j]='\0';
}
void main()
{
	printf("Enter an infix expression\n");
	scanf("%s",infix);
	infixtopostfix();
	printf("postfix expression is %s\n", postfix);
}
