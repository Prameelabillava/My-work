//program for power management

#include<stdio.h>
void main()
{
char name[20];
int units;
float amount;
const int MCHARGE=100;
printf("enter the name and number of units\n");
scanf("%s%d",name,&units);
if(units<=200)
amount=units*0.80;
else if(units<=300)
amount=200*0.800+(units-200)*0.90;
else
amount=200*0.80+100*0.90+(units-300)*1;
amount=amount+MCHARGE;
if(amount>400.0)
amount=amount+amount*0.15;
printf("name=%s\n",name);
printf("number of units=%d\n",units);
printf("amount=%f\n",amount);
}
