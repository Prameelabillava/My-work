#include<stdio.h>

void main()
{
	int x=10, y=10, z=10, k=10;
	int a, b, c, d;
	
	b = ++x + x++;  //  23 how?
	
	c = ++y + ++y;  //  24 how?
	
	d = z++ + z++;  //  21  ok
	
	a = k++ + ++k;  //  22  ok
	
	printf("a=%d \t b=%d \t c=%d \t d=%d \n", a, b, c, d);	

}
