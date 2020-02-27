#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define size 20
char postfix [size];
double stack[size];
int top= -1;
double posteval ()
     {
	double op1,op2,res;
	char ch;
	int i;
	for(i=0;postfix[i]!='\0';i++)
	{
	   ch=postfix[i];
	   if(ch>='0'&&ch<='9')
	   stack[++top]=ch-'0';
	   else if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='^'||ch=='%')
 	    {
	        op2=stack[top--];
                op1=stack[top--];
	    switch(ch)
 	     {
	       case '+':res=op1+op2;
 			break;
      	       case '-':res=op1-op2;
			break;
	       case '*':res=op1*op2;
  			 break; 	       
	       case '/':res=op1/op2;
 			break;
	       case '^':res=pow(op1,op2);
			 break;
	       case '%':res=fmod(op1,op2);
			 break;
	    }
	stack[++top]=res;
           }
        } 			
  return(stack[top--]);
}
void towar(int n,char src,char dst,char aux)
{
	if(n==1)                                                  
	 {
		printf("\n move disk 1 from %c to %c peg\n",src,dst);
		return;
	  }
		towar(n-1,src,aux,dst);
		printf("\n movedisk %d from %c to %c peg\n",n,src,dst);
		towar(n-1,aux,dst,src);
}
void main()
{
	char cont;
	int choice,n;
	double res;
	do
	  {
		printf("\n 1.postfix evaluation \n");
		printf("\n 2.towar of hanoi \n");
		printf("\n 3.exit \n");
		printf("\n enter your choice \n");
		scanf("%d",&choice);
	  	switch(choice)
	     	{
		case 1: printf("enter the postfix expression \n");
		 	scanf("%s",postfix);
			res=posteval();
			printf("\n the result is =%4.2f",res);
			break;
		case 2: printf("enter the number of disk\n");
			scanf("%d",&n);
			towar(n,'A','C','B');
			break;
		case 3: exit(0);
		}
	printf("\n Do you want to continue Y / N \n");
	scanf("\n%c",&cont);
	} while(cont=='y');
}
