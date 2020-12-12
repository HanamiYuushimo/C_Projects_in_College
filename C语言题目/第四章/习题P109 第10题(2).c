#include <stdio.h>
//用switch语句编程序
int main()
{
  	int i;
  	double sum;
  	printf("请输入利润(元)：");
  	scanf_s("%d", &i);
  	switch (i / 100000)
  	{
    		case 0:sum = i * 0.1; break;
    		case 1:sum = 1 + (i - 100000) * 0.075; break;
    		case 2:
    		case 3:sum = 1 + 0.75 + (i - 200000) * 0.05; break;
    		case 4:
	    	case 5:sum = 1 + 0.75 + 1 + (i - 400000) * 0.03; break;
	    	case 6:
	    	case 7:
	    	case 8:
	    	case 9:sum = 1 + 0.75 + 1 + 0.6 + (i - 600000) * 0.015; break;
	    	default:sum = 1 + 0.75 + 1 + 0.6 + 0.6 + (i - 1000000) * 0.01;
  	}
  	printf("当月奖金总数为%f元。\n", sum);
  	return 0;
}
