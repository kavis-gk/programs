#include<stdio.h>
void main()
{
	int k,v,j;
	scanf("%d %d",&k,&v);
	for(j=k;j<=v;j++)
	{
	    if(j%2!=0)
	    {
	        printf("%d ",j);
	    }
	}
}
