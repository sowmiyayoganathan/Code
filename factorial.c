#include <stdio.h>
#include<string.h>
int main(void) {
	long int number,i,fact=1;
	scanf("%ld",&number);
	for(i=1;i<=number;i++)
	{
		fact=fact*i;
	}
	printf("%ld",fact);
	return 0;
}
