#include <stdio.h>
int main()
{
  int sum=0,i=100;
  do{
    sum=sum+i;
    i++;
  }
  while(i<=100);
  printf("1+2+3+...+100=%d.\n",sum);
  return 0;
}
