#include <stdio.h>
int main(void) {
	char ch;
	scanf("%c",&ch);
	if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
	{
		printf("It is an alphabet");
	}
	else
		printf("It is not an alphabet");
	return 0;
}
