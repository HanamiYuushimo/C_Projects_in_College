#include <stdio.h>

int main(int argc, char *argv[])
{
	int peach(int n);
	printf("��һ�칲ժ%d�����ӡ�\n",peach(10));
	return 0;
}

int peach(int n)
{
	if(n==1)										//���10��n=1 
		return 1;
	else 
		return (peach(n-1)+1)*2;
} 


