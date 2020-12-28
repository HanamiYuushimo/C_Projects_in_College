include <stdio.h>
int main()
{
  int sum=0,i=100;
  while(i<=100)
  {
    sum=sum+i;
    i++;
  }
  printf("1+2+3+...+100=%d.\n",sum);
  return 0;
}
