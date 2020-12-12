#include <stdio.h>
//用if语句编程序
int main()
{
    double i, sum;
  	printf("请输入利润(万元)：");
  	scanfs("%lf", &i);
  	if (i <= 10)sum = i * 0.1;
	  else if (i <= 20)sum= 1 + (i - 10) * 0.075;
  	     else if (i <= 40)sum = 1 + 0.75 + (i - 20) * 0.05;
	            else if (i <= 60)sum = 1 + 0.75 + 1 + (i - 40) * 0.03;
	                 else if (i <= 100)sum = 1 + 0.75 + 1 + 0.6 + (i - 60) * 0.015;
	                      else sum = 1 + 0.75 + 1 + 0.6 + 0.6 + (i - 100) * 0.01;
	  printf("当月奖金总数为%f万元。\n", sum);
	  return 0;
}
