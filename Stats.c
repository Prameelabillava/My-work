#include<stdio.h>
#include<math.h>

float find_sum(float *ptr, int n)
{
	float s=0;
	int i;
	
	for(i=0; i<n; i++)
	{
		s = s + *ptr;
		ptr++;
	}
	return s;
}

float find_variance(float *ptr, float m, int n)
{
	float val, var=0;
	int i;
	
	for(i=0; i<n; i++)
	{
		val = *ptr - m;
		var = var + pow(val, 2);
		ptr++; 
	}
	
	return (var/n);
}

void main()
{
	float a[20], sum, mean, variance, std_dev;
	int n, i;
	
	printf("enter the no. of elements\n");
	scanf("%d", &n);
	
	printf("enter %d elements\n", n);
	
	for(i=0; i<n; i++)
	{
		scanf("%f", &a[i]);	
	}
	
	sum = find_sum(a, n);
	mean = sum / n;
	
	variance = find_variance(a, mean, n);
	std_dev = sqrt(variance);
	
	printf("Sum = %f \n", sum);
	printf("Mean = %f \n", mean);
	printf("Standard Deviation = %f \n", std_dev);
}

