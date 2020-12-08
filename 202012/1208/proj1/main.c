#include <stdio.h>
//利用函数实现两个数比较大小
int main(int argc, char *argv[])
{
	int a,b,c,d;
	int max(int a,int b);
	int min(int a,int b);
	printf("请输入两个数字，用逗号隔开：");
	scanf("%d,%d",&a,&b);
	c=max(a,b);
	d=min(a,b);
	printf("最大值为%d,最小值为%d.\n",c,d);
	return 0;
}

int max(int a,int b)
{
	int c;
	if(a>b) c=a;
	else c=b;
	return c;
}

int min(int a,int b)
{
	int c;
	if(a<b) c=a;
	else c=b;
	return c;
}
