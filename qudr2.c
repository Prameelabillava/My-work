//progam to find roots of a quadratic equation

#include<stdio.h>

#include<math.h>

void main ()
{
	
double a,b,c,root1,root2,real,img,det;
printf("enter the value of a,b,c\n");
scanf("%lf%lf%lf",&a,&b,&c);
det=b*b-4*a*c;
if(a==0&&b==0)
{
printf("invalid inputs\n");
return;
}
if(a==0)
{
root1=-c/b;
printf("root=%lf",root1);
return;
}
if(det>0)	
{
root1=(-b+sqrt(det))/(2*a);
root2=(-b-sqrt(det))/(2*a);
printf("root1=%lf\n",root1);
printf("root2=%lf",root2);
return;
}
else if(det==0)
{
root1=root2=-b/(2*a);
printf("root1=%lf\n",root1);
printf("root2=%lf\n",root2);
return;
}
else
{
real=-b/(2*a);
img=sqrt(fabs(det))/(2*a);
printf("root1=%lf+%lfi\n",real,img);	
printf("root2=%lf-%lfi\n",real,img);
}

}









