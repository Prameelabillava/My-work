#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int ht[MAX];
int hashfunc(int key)
{
	int res;
	res=key%MAX;
	return res;
}
void insert(int key ,int hkey)
{
	int i=key;
	if(ht[hkey]==-1)
	{
		ht[hkey]=key;
		printf("\n key inserted at position :%d\n",hkey);
		return;
	}
		i=(i+1)%MAX;
		while(i!=hkey)
		{
			if(ht[i]==-1)
				{
					ht[i]=key;
					printf("\n key inserted at %d position using linear probing\n",i);
					return;
				}
			i=(i+1)%MAX;
		}
		printf("\n hash table is full \n");
}
void main()
{
	char ch='y';
	int key,hkey,i;
	for(i=0;i<MAX;i++)
 	ht[i]=-1;
	do
	{
		printf("\n enter the 4 digit key value\n");
		scanf("%d",&key);
		hkey=hashfunc(key);
		insert(key,hkey);
		printf("\n do you have more keys ? (y/n)\n");
		scanf("\n %c",&ch);
	}
	while(ch=='y');
}
