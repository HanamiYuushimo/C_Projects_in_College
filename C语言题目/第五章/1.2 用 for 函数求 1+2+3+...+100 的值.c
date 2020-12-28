include <stdio.h>
int main()
{
  int sum=0,i=100;
  for(i=0;i<=100;i++)
  {
    sum=sum+i;
    i++;
  }
  printf("1+2+3+...+100=%d.\n",sum);
  return 0;
}
