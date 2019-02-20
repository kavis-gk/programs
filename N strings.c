#include <stdio.h>
#include<string.h>
int main(void) 
{
	int aa,bb,max=0,i;
	char a[100],b[100];
	printf("\nEnter the first string:  ");
	scanf("%s",c);
	printf("\nEnter the second string:  ");
	scanf("%s",d);
	aa=strlen(c);
	bb=strlen(d);
	if(aa>bb)
	{
		max=aa;
	}
	else
	{
		max=bb;
	}
	for(i=0;i<max;i++)
	{
		if(a[i]==b[i])
		{
			printf("%c",a[i]);
		}
		else
		{
			break;
		}
	}
	return 0;
}
