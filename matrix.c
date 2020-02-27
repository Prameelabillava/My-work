
//program to perform matrix multplication

#include<stdio.h>

void main()
{

int a[10][10],b[10][10],c[10][10],m,n,p,q,i,j,k;
printf("enter the values of m and n\n");
scanf("%d%d",&m,&n);
printf("enter the values of p and q\n");
scanf("%d%d",&p,&q);
if(n!=p)
{
printf("matrix multiplication cannot be done\n");		
return;
}	
printf("enter the %d elements of first matrix\n",m*n);
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{			
scanf("%d",&a[i][j]);
}
}
printf("enter the %d elements of second matrix\n",p*q);	
for(i=0;i<p;i++)
{		
for(j=0;j<q;j++)		
{
scanf("%d",&b[i][j]);
}
}
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
c[i][j]=0;
for(k=0;k<n;k++)
{	
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}	
}
}
printf("the resultant matrix is\n");
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
}
