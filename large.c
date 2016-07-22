#include <stdio.h>
int main(void) {
	int num1,num2,num3;
	scanf("%d %d %d",&num1,&num2,&num3);
	(num1>num2)?((num1>num3)?printf("%d",num1):((num3>num2)?printf("%d",num3):printf("%d",num2))):((num2>num3)?printf("%d",num2):printf("%d",num3));
	return 0;
}
