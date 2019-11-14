#include<stdio.h>
void main()
{
int a,i,fact=1;
printf("enter a value:");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
fact=fact*i;
}
printf("the factorial of %d is %d",a,fact);
}
