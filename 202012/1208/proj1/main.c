#include <stdio.h>

int main(int argc, char *argv[])
{
	int a,b,c,d;
	int max(int a,int b);
	int min(int a,int b);
	printf("�������������֣��ö��Ÿ�����");
	scanf("%d,%d",&a,&b);
	c=max(a,b);
	d=min(a,b);
	printf("���ֵΪ��%d;��СֵΪ��%d��\n",c,d);
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
