#include <stdio.h>

int main(void) {
	int count=0,number;
	scanf("%d",&number);
	while(number!=0)
	{
		count++;
		number=number/10;
	}
	printf("%d",count);
	return 0;
}
