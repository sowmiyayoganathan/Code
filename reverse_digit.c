#include <stdio.h>
#include<string.h>
int main(void) {
	long int num;
	scanf("%ld",&num);
	if(num>0)
	{
		while(num)
		{
			if(num>0)
			{
				long int result;
				result=num%10;
				printf("%ld",result);
				num=num/10;
			}
		}
	}
	else
	{
		printf("0");
	}
	return 0;
}
