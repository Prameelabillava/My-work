#include<stdio.h>
#include<stdlib.h>
#define SIZE 40
struct node *create();
void insert_beg();
void delete_beg();
void insert_rear();
void delete_rear();
void display();

struct student
{
	char usn[SIZE];
	char name[SIZE];
	char branch[SIZE];
	int sem;
	long long int ph_no;
};

struct node
{
	struct student data;
	struct node *link;
};

struct node *first=NULL,*last=NULL;
void main()
{
	int ch;
	char r;

	do
	{
		printf("1.Insert at Begining\n");
		printf("2.Delete at Begining\n");
		printf("3.Insert at Rear\n");
		printf("4.Delete at Rear\n");
		printf("5.Display\n");
		printf("6.Exit\n");
		
		printf("Enter your choice\n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:printf("Enter Student Data:\n");
				insert_beg();
				break;
			
			case 2:delete_beg();
				break;

			case 3:printf("Enter Student Data:\n");
				insert_rear();
				break;
			
			case 4:delete_rear();
				break;
			
			case 5:printf("Display the List\n");
				display();
				break;
				
			case 6:exit(0);
		}
		printf("Do you want to continue Y/N\n");
		scanf(" %c",&r);
	}while(r=='y');
}

struct node *create()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	
	setbuf(stdin,NULL);	
	printf("Enter USN:\n");
	gets((temp->data).usn);
	
	setbuf(stdin,NULL);
	printf("Enter NAME:\n");
	gets((temp->data).name);
	
	printf("Enter Branch:\n");
	gets((temp->data).branch);
	
	printf("Enter Sem:\n");
	scanf("%d",&(temp->data).sem);
	
	printf("Enter Phone number:\n");
	scanf("%lld",&(temp->data).ph_no);
	
	temp->link=NULL;
	return temp;
}

void insert_beg()
{
	struct node *temp;
	temp=create();
	
	if(first==NULL)
	{
		first=last=temp;
		return;
	}
	temp->link=first;
	first=temp;
}

void delete_beg()
{
	struct node *temp;
	if(first == NULL)
	{
		printf("List is empty\n");
	}
	
	if(first == last)
	{
		printf("Deleted node = %s\n",(first->data).name);
		free(first);
		first=last=NULL;
		return;
	}
	temp=first;
	first=first->link;
	printf("Deleted node = %s\n",(temp->data).name);
	temp->link=NULL;
	free(temp);
}

void insert_rear()
{
	
	struct node *temp;
	temp=create();
	
	if(first==NULL)
	{
		first=last=temp;
		return;
	}
	last->link=temp;
	last=temp;
}

void delete_rear()
{
	struct node *temp;
	if(first == NULL)
	{
		printf("List is empty\n");
	}
	
	if(first == last)
	{
		printf("Deleted node = %s\n",(first->data).name);
		free(first);
		first=last=NULL;
		return;
	}
	temp=first;
	while(temp->link!=last)
	{
		temp=temp->link;
	}
	printf("Deleted node = %s\n",(temp->data).name);
	temp->link=NULL;
	free(last);
	last=temp;
}
	
void display()
{
	struct node * temp=NULL;
	int count=0;
	if(first == NULL)
	{
		printf("List is mempty\n");
		return;
	}
	
	temp=first;
	while(temp!=NULL)
	{
		printf("\n---------------------------\n");
		printf("\nUSN:%s\n",(temp->data).usn);
		printf("\nName:%s\n",(temp->data).name);
		printf("\nBranch:%s\n",(temp->data).branch);
		printf("\nSem:%d\n",(temp->data).sem);
		printf("\nPhone number:%lld\n",(temp->data).ph_no);
		
		count=count+1;
		temp=temp->link;
	}
	printf("\n---------------------------\n");
	printf("\n Total number of nodes = %d\n",count);	
	printf("\n---------------------------\n");
}
