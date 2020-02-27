#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 100
char str[SIZE],pat[SIZE],rep[SIZE];
int s,p,r,i,j,k;
int flag=0;

int findsize(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
         i++;
	}
	return i;
}

int findpattern(int pos)
{
	
	for(i=pos;i<=s-p;i++)
	{
		j=0;
		while((j<p)&&(pat[j]==str[i+j]))
		{
			j++;
			
		}
		if(j==p)
		{
			flag=1;
			return i;
		}
	}
return -1;
}

int replace(int pos)
{
	
	char temp[SIZE];
	for(i=0,j=0;j<pos;i++,j++)
	temp[i]=str[j];
	for(k=0;k<r;k++)
	{
		temp[i]=rep[k];
		i++;
	}
	for(j=j+p;j<s;j++)
	{
		temp[i]=str[j];
		i++;
	}
	for(k=0;k<i;k++)
	str[k]=temp[k];
	str[k]='\0';
	return findsize(str);
	
}

void main()
{
	int pos=-1;
	printf("\n Enter the main string:\n");
	gets(str);
	printf("\n Enter the pattern string\n");
	gets(pat);
	printf("\n Enter the replacement string\n");
	gets(rep);
	s=findsize(str);
	p=findsize(pat);
	r=findsize(rep);
	if(p>s)
	{
		printf("\n pattern is larger then main string\n");
		exit(0);
	}
	while(1)
	{
		pos=findpattern(pos+1);
		if(pos!=-1)
		{
			printf("\n Pattern found at position=%d\n",pos);
			s=replace(pos);
			printf("\n Replaced string=%s\n",str);
		}
		else
		break;
		getchar();
	}
	if(flag==0)
	printf("\n Pattern not found\n");
}
