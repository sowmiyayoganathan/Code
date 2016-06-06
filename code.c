#include<stdio.h>
int main()
{
  int a;
  scanf("%d",&a);
  if(a<0)
    printf("The number is negative\n");
  else if(a==0)
    printf("The number is zero\n");
  else if(a>0)
    printf("The number is positive\n");
  return 0;
}
