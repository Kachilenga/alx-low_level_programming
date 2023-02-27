#include <stdio.h>

int main(void)
{
	int n;
	int *p;
	n = 40;
	p = &n;

	printf("The value of n is %d\n",n);
	printf("The value of p is %p\n",p);
	*p = 80;
	printf("The value of n is %d\n",n);
	
	return (0);
}	
