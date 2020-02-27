#include<stdio.h>
#include<stdlib.h>
#define SIZE 40
struct employee
{
             char name[SIZE];
             char dept[SIZE];
             char designation[SIZE];
	     double sal;
             unsigned long long phno;
	     unsigned long long ssn;
};
struct node
{
             struct employee data;
             struct node *llink, *rlink;
};
struct node *first=NULL, *last=NULL;

struct node *getnode()
{
             struct node *temp=NULL;
             temp=(struct node*)malloc(sizeof(struct node));
             printf("\n enter the name\n");
             setbuf(stdin,NULL);
             gets(temp->data.name);
             printf("\n enter the dept\n");
             gets(temp->data.dept);
             printf("enter the designation\n");
             gets(temp->data.designation);
             printf("enter the ssn\n");
             scanf("%llu",&temp->data.ssn);
             printf("enter the salary\n");
             scanf("%lf",&temp->data.sal);
             printf("\n enter the phone\n");
             scanf("%llu",&temp->data.phno);
	     temp->rlink=temp->llink=NULL;
             return temp;
}

void insert_at_beg()
{
              struct node *temp;
              temp=getnode();
              if(first==NULL)
              {
                       first=last=temp;
                       return;
              }
              temp->rlink=first;
              first->llink=temp;
              first=temp;
}

void insert_at_end()
{
              struct node *temp;
              temp=getnode();
              if(last==NULL)
             {
                       first=last=temp;
                       return;
             }
             last->rlink=temp;
             temp->llink=last;
             last=temp;
}

void delete_at_beg()
{
             struct node *temp;
             if(first==NULL)
             {
                        printf("\n list is empty cannot delete\n");
                        return;
             }
             temp=first;
             printf("\n delete node=%s\n",first->data.name);
             if(first==last)
            {
            first=last=NULL;
            }
            else
            {
            first=first->rlink;
            first->llink=NULL;
            temp->rlink=NULL;
            }
            free(temp);
}

void delete_at_end()
{
           struct node *cur;
            if(last==NULL)
            {
                         printf("\n list is empty,cannot delete\n");
                         return;
            }
            if(first==last)
            {
                         printf("\n deleted node=%s\n",last->data.name);
                         first=last=NULL;
                         free(last);
                         return;
           }
           cur=last;
           printf("\n deleted node=%s\n",last->data.name);
           last=last->llink;
           last->rlink=NULL;
           cur->llink=NULL;
           free(cur);
}
void display()
{
           int count=0;
           struct node *cur;
           if(first==NULL)
           {
                        printf("\n list is empty\n");
           }
           cur=first;
           while(cur!=NULL)
          {
                        printf("\n.......................\n");
                        printf("NAME=%s\n",cur->data.name);
                        printf("SSN=%llu\n",cur->data.ssn);
                        printf("DEPT=%s\n",cur->data.dept);
                        printf("DESIGNATION=%s\n",cur->data.designation);
                        printf("SALARY=%.2lf\n",cur->data.sal);
                        printf("PH.NO=%llu\n",cur->data.phno);
                        count++;
                        cur=cur->rlink;
			 printf("\n.........................\n");
	   }
          
           printf("\n no of nodes=%d\n",count);
           printf("\n.............................\n");
}
void main()
{
            int choice;
            char ch='y';
            do
           {
                       printf("1.insert at begining\n");
                       printf("2.insert at end \n");
                       printf("3.delete at begining\n");
                       printf("4.delete at end\n");
                       printf("5.display\n");
                       printf("6.exit\n");
		   	printf("Enter your choice\n");
                       scanf("%d",&choice);
                       switch(choice)
                       {
                                     case 1:insert_at_beg();
                                                break;
                                     case 2:insert_at_end();
                                                break;
                                     case 3:delete_at_beg();
                                                break;
                                     case 4:delete_at_end();
                                                break;
                                     case 5:display();
                                                break;
                                    default:exit(0);
                        }
                    printf("\n do you want to continue(y/n)?\n");
                    scanf("\n%c",&ch);
            }
                    while(ch=='y');
}



