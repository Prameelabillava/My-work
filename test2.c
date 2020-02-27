#include<stdio.h>
#include<math.h>


long BCDConv(long n, int i)
{
	int rem=0;
	long res;
	
	if(n == 0)
		return 0;
	else
	{
		rem = n % 10;
		n = n /10;
		res = rem * pow(2,i) + BCDConv(n, ++i);
		return res;
		
	}	
}

void main()
{
	long num, res;
	printf("Enter a number\n");
	scanf("%ld", &num);
	res = BCDConv(num, 0);
	printf("Decimal Value = %ld\n", res);
}
