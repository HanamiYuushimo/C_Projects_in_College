#include <stdio.h>

int main(int argc, char *argv[])
{
	int a,b;
	void sushu(int i);
	void ZhengChu3(int i);
	void ZhengChu5(int i);
	void ZhengChu15(int i);
	printf("请输入一个数：");
	scanf("%d",&a);
	printf("请输入编号：\n输入[1]判断是否为素数；\n输入[2]判断是否被3整除；\n输入[3]判断是否被5整除；\n输入[4]判断是否同时被3和5同时整除。\n");
	scanf("%d",&b);
	switch(b)
	{
		case 1:sushu(a);break;
		case 2:ZhengChu3(a);break;
		case 3:ZhengChu5(a);break;
		case 4:ZhengChu15(a);break;
		default:printf("参数错误...>_<\n");
	}
	return 0;
}

void sushu(int i)
{
	int j;
	for(j=2;j<=i-1;j++)
		if(i%j==0) break;
	if(j>=i) printf("%d是素数。\n",i);
	else printf("%d不是素数。\n",i);
}

void ZhengChu3(int i)
{
	if(i%3==0) printf("%d能被3整除。\n",i);
	else printf("%d不能被3整除。\n",i);
}

void ZhengChu5(int i)
{
	if(i%5==0) printf("%d能被5整除。\n",i);
	else printf("%d不能被5整除。\n",i);
}

void ZhengChu15(int i)
{
	if(i%3==0) printf("%d能同时被3和5整除。\n",i);
	else printf("%d不能同时被3和5整除。\n",i);
}
