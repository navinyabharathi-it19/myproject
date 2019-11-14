#include<stdio.h>
void main()
{
int a,b,i;
printf("enter a table:");
scanf("%d",&a);
printf("enter end value:");
scanf("%d",&b);
for(i=1;i<=b;i++)
{
printf("\n%d*%d=%d",a,i,a*i);
}
}
