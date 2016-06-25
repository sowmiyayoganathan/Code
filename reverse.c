#include <stdio.h>
#include<string.h>
int main(void) {
	char str[100];
	int l=0,i;
	scanf("%[^\n]s",str);
	l=strlen(str);
	for(i=l-1;i>=0;i--){
		printf("%c",str[i]);
	}
	return 0;
}
