#include<stdio.h>
void main()
{
int a,b,c,d,e,total,avg;
printf("enter the marks:");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
total=a+b+c+d+e;
printf("the total =%d",total);
avg=total/5;
printf("\nthe avg =%d",avg);
}
