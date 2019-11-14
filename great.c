#include<stdio.h>
void main()
{
int a,b,c;
printf("enter a value:");
scanf("%d",&a);
printf("enter b value:");
scanf("%d",&b);
printf("enter c value:");
scanf("%d",&c);
if(a>b&&a>c)
{
printf("a is greatest value");
}
else if(b>c)
{
printf("b is greatest value");
}
else
{
printf("c is greatest value");
}
}
