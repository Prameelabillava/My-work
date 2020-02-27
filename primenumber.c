//program to find given number is prime or not

#include<stdio.h>

int is_prime(int num)
{
int i;
for(i=2;i<=num/2;i++)
{
if(num%i==0)
{
return 0;
}
return 1;
}
}


void main()
{
	
int n,res;
printf("Enter a number\n");
scanf("%d",&n);	
res=is_prime(n);
if(res==0)
printf("The number %d is not a prime number\n",n);
else
printf("The number %d is a prime number\n",n);
}


