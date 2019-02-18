#include<stdio.h>
#include<string.h>
int main(void)
{
	int number;
	scanf("%d",&number);
	int count=0;
	while(number!=0)
	{
            number=number/10;
            count++;
	}
     printf("%d",count);
     return 0;
}
