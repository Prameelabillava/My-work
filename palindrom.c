//progam to check for palindrome

#include<stdio.h>

void main()
{
	
int num,rem=0,rev=0,temp=0;
printf("enter a number\n");
scanf("%d",&num);
temp=num;
while(temp>0)
{
rem=temp%10;
temp=temp/10;
rev=rev*10+rem;
}
if(num==rev)
printf("the given number is palindrome\n");
else
printf("the given number is not palindrome\n");
}
