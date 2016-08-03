#include <stdio.h>

int main(void) {
	int i,n,sum=0;
	scanf("%d",&n);
	if(n>0)
	{
		for(i=1;i<=n;i++)
		{
			sum=sum+i;
		}
		printf("%d",sum);
	}
	else
		printf("0");
	return 0;
}
