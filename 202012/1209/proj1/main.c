#include <stdio.h>

int main(int argc, char *argv[])
{
	int a,b;
	void sushu(int i);
	void ZhengChu3(int i);
	void ZhengChu5(int i);
	void ZhengChu15(int i);
	printf("������һ������");
	scanf("%d",&a);
	printf("�������ţ�\n����[1]�ж��Ƿ�Ϊ������\n����[2]�ж��Ƿ�3������\n����[3]�ж��Ƿ�5������\n����[4]�ж��Ƿ�ͬʱ��3��5ͬʱ������\n");
	scanf("%d",&b);
	switch(b)
	{
		case 1:sushu(a);break;
		case 2:ZhengChu3(a);break;
		case 3:ZhengChu5(a);break;
		case 4:ZhengChu15(a);break;
		default:printf("��������...>_<\n");
	}
	return 0;
}

void sushu(int i)
{
	int j;
	for(j=2;j<=i-1;j++)
		if(i%j==0) break;
	if(j>=i) printf("%d��������\n",i);
	else printf("%d����������\n",i);
}

void ZhengChu3(int i)
{
	if(i%3==0) printf("%d�ܱ�3������\n",i);
	else printf("%d���ܱ�3������\n",i);
}

void ZhengChu5(int i)
{
	if(i%5==0) printf("%d�ܱ�5������\n",i);
	else printf("%d���ܱ�5������\n",i);
}

void ZhengChu15(int i)
{
	if(i%3==0) printf("%d��ͬʱ��3��5������\n",i);
	else printf("%d����ͬʱ��3��5������\n",i);
}
