#include <stdio.h>
//���ú���ʵ�����200-300������� 
int main(int argc, char *argv[])
{
	void sushu(int i);
	int a;
	printf("������һ������");
	scanf("%d",&a);
	sushu(a);
	return 0;
}

void sushu(int i)
{
	int j;
	for(j=2;j<=i-1;j++)
		if(i%j==0) break;
		
	if(j>=i) printf("%d������.\n",i);
	else printf("%d��������.\n",i);
} 
