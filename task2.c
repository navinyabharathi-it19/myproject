#include<stdio.h>
void main()
{
int a,c,d;
char b;
printf("enter the operand 1:");
scanf("%d",&a);
printf("enter the operator:");
scanf("\n%c",&b);
printf("enter the operand 2:");
scanf("%d",&c);
if(b=='+')
{
d=a+c;
printf("%d+%d=%d",a,c,d);
}
else if(b=='-')
{
d=a-c;
printf("%d-%d=%d",a,c,d);
}
else if(b=='*')
{
d=a*c;
printf("%d*%d=%d",a,c,d);
}
else if(b=='/')
{
d=a/c;
printf("%d/%d=%d",a,c,d);
}
else
{
printf("it is a invalide character");
}
}
