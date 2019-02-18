#include<stdio.h>
int main()
{
	int num,rev=0,rem,k;
	scanf("%d",&num);
	k=num;
	while(num>0)
	{
		rem=num%10;
		rev=(rev*10)+rem;
		num=num/10;
	}
	if(k==rev)
	{
		printf("\nyes");
		}
		else
			printf("\nNo");
	return 0;
}
