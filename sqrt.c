#include<stdio.h>
#include<math.h>

void main()
{
	int num;
	float temp, sroot;
	printf("enter a number\n");
	scanf("%d", &num);
	sroot = num/2;
	temp=0;
	
	while(sroot!=temp)
	{
		temp = sroot;
		sroot = (num/temp + temp)/ 2;
	}
	printf("Square root of (%d) = %f\n", num, sroot);
	printf("Square root of (%d) using built-in function = %f\n", num, sqrt(num));

}
