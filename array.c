#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int n,a[100],pos,val,i;

void create()
{
	
	printf("Enter the size of the array:\n");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	} 

}

void display()
{
	if(n==0)
	{
		printf("Array is empty\n");
	}
	else
	{
		printf("The enteerd elements are:\n");
		for(i=0;i<n;i++)
		{
			printf("%d\n",a[i]);
		}
	}
}

void insert()
{
	if(n==MAX)
	{
		printf("Array is full\n");
	}
	else
    	{
		printf("Enter the position\n");
		scanf("%d",&pos);
		if(pos>=0&&pos<n)
		{
			printf("Enter the value to be inserted\n");
			scanf("%d",&val);
			for(i=n;i>pos;i--)
			{
				a[i]=a[i-1];
			}
			a[pos]=val;
			n++;
			printf("Elements inserted succesfully=%d\n",a[pos]);
		}
	else
	printf("invalid position\n");
	}
}

void delete()
{

    	if(n==0)
	{
		printf("Array is empty\n");
	}
	else
	{
		printf("Enter the position\n");
		scanf("%d",&pos);
		if(pos>=0&&pos<n)
		{
			val=a[pos];
			for(i=pos;i<n-1;i++)
			{
				a[i]=a[i+1];
     			}
			n--;
			printf("Elements deleted succesfully=%d\n",val);
		}
	else
	printf("invalid position\n");
	}
}	

void main()
{
	int choice;
	char cont;
	do
	{
		printf("1.create\n2.display\n3.insert\n4.delete\n5.exit\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:create();
			break;
			case 2:display();
			break;
			case 3:insert();
			break;
			case 4: delete();
			break;
			default:exit(0);
		}
		printf("if you want to continue press :Y/N \n");
		scanf("\n%c",&cont);
	}while(cont=='y');	
}

