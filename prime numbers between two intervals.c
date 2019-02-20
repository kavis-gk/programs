#include<stdio.h>
int main()
{
int o,c,d,j,count;
printf("enter the two limits");
scanf("%d%d",&c,&d);
for(j=c;j<d;j++)
{
count=0;
for(o=2;o<j;o++)
{
if(j%o==0)
count++;
}
if(count==0)
printf("%d\o",j);
}
}
