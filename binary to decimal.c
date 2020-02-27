//program for binary to decimal conversion

#include<stdio.h>

#include<math.h>


long BTDConv(long n,int i)
{
	
long res=1;
	
int rem;

	
if(n==0)
	
return 0;


	else
	{
		
rem=n%10;
		
n=n/10;
		
res=rem*pow(2,i)+BTDConv(n,++i);
		
return res;

	}

}


void main()
{
	
long num,res;

	
printf("enter a binary number\n");
	
scanf("%ld",&num);
	
res=BTDConv(num,0);

	
printf("binaary (%ld)=decimal(%ld)\n",num,res);

}