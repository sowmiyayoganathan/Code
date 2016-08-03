#include <stdio.h>

int main(void) {
	int number;
	int power,sum=1;
	scanf("%d %d",&number,&power);
	if(power==0)
		printf("1");
	else
	{
		while(power!=0)
		{
			sum=sum*number;
			power--;
		}
	}
	printf("%d",sum);
	return 0;
}
