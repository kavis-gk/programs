#include <stdio.h>
int main(void) {
	int num,exp;
	long result=1;
	printf("Enter the number:\n");
	scanf("%d",&num);
	printf("Enter the exponent:\n");
	scanf("%d",&exp);
    while(exp!=0)
    {
    	result*=num;
    	--exp;
    }
    printf("Power of number is:%d\n",result);
	return 0;
}
