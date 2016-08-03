#include <stdio.h>

int main(void) {
	int year;
	scanf("%d",&year);
	if(year>0)
	{
		if(((year%4==0)&&(year%100!=0)) || (year%400==0) || (year==1752))
			printf("%d is a leap year",year);
		else 
			printf("%d is not a leap year",year);
	}
	else
		printf("Invalid year");
	return 0;
}
