#include<stdio.h>
int main()
{
int b,c,count=0;
scanf("%d",&b);
for(c=2;c<b;c++)
{
if(b%c==0)
count++;
}
if(count==0)
printf("prime number\n");
else
printf("not a prime number\n");
}
