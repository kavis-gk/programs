#include<stdio.h>
int main()
{
int c,d,e;
printf("enter the two limits");
scanf("%d%d",&c,&d);
for(e=c;e<d;e++)
{
if((e)%2==0)
printf("%d\n",e);
}
}
