#include <stdio.h>
//利用函数实现输出200-300间的素数 
int main(int argc, char *argv[])
{
	void sushu(int i);
	int a;
	printf("请输入一个数：");
	scanf("%d",&a);
	sushu(a);
	return 0;
}

void sushu(int i)
{
	int j;
	for(j=2;j<=i-1;j++)
		if(i%j==0) break;
		
	if(j>=i) printf("%d是素数.\n",i);
	else printf("%d不是素数.\n",i);
} 
