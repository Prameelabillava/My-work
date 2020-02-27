//program to execute taylor series

#include <stdio.h>
#include <math.h>
#define PI 3.1416
int fact(int n)
{
int i,res=1;
if(n==0  || n==1)
{
return 1;	
}
else
{
for(i=2;i<=n;i++)
{	
res=res*i;
}
return res;
}
}

void main()
{
float deg,rad,sum=0;
int i,neg=-1;
printf("enter the angle degree\n");
scanf("%f",&deg);
rad=deg*PI/180.0;
sum=rad;
for(i=3;i<=10;)
{
sum=sum+neg*pow(rad,i)/fact(i);
neg=-neg;
i=i+2;
}
printf("sin(%f)using taylor series=%f\n",deg,sum);
printf("sin(%f)using built in function=%f\n",deg,sin (rad));
}
