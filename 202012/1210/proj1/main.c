#include <stdio.h>

int main(int argc, char *argv[])
{
	int n,jiecheng(int n);
	printf("������һ����������");
	scanf("%d",&n);
	printf("%d!=%d\n",n,jiecheng(n));
	return 0;
}

int jiecheng(int n)
{
	if(n==1)
		return 1;
	else
		return jiecheng(n-1)*n;
}
