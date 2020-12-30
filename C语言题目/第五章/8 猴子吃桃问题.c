#include <stdio.h>
//题目见习题P138 第12题
int main()
{
    int sum,i;
	sum=1;
	for(i=1;i<9;i++)
	sum=2*(sum+1);
    printf("第一天桃子数为：%d\n",sum);
    return 0;
}
