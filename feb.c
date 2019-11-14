#include<stdio.h>
void main()
{
int c,n,i;
int a=0,b=1;
printf("enter the value:");
scanf("%d",&n);
printf("%d",a);
printf("\n%d",b);
for(i=0;i<=n;i++)
{
c=a+b;
printf("\n%d",c);
a=b;
b=c;
}
}
