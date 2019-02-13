#include<stdio.h>
int main(void)
{
	int k=34,g=44,f=87;
	scanf("%d%d%d",&k,&g,&f);
	if((k>g)&&(k>f))
	{
		printf("%d is greater",k);
	}
	else if(g>f)
	{
		printf("%d is greater",g);
	}
	else
	{
		printf("%d is greater",f);
	}

}
