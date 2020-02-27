// program for bubble sort

#include<stdio.h>
void main()
{
int x[20],n,i,temp,j;
printf("How many elements\n");
scanf("%d",&n);
printf("Enter %d elements\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&x[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1-i;j++)
{
if(x[j]>x[j+1])
{
temp=x[j];
x[j]=x[j+1];
x[j+1]=temp;
}
}
}
printf("The sorted array\n");
for(i=0;i<n;i++)
{
printf("%d\t",x[i]);
 }
}
