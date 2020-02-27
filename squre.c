//program to find square root of a number

#include<stdio.h>
#include<math.h>
void main()
{
int num;
float sroot,temp;
printf("enter a number\n");
scanf("%d",&num);
if(num<0)
{
printf("enter a positive number/n");
return;
}
sroot=num/2.0;
temp=0;
while(sroot!=temp)
{
temp=sroot;
sroot=(num/temp+temp)/2;
}
printf("square root of %d=%f\n",num,sroot);
printf("squre root of %d using built in function =%f\n",num,sqrt(num));
}

