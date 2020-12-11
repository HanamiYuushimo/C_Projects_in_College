#include <stdio.h>

int main(int argc, char *argv[])
{
	int peach(int n);
	printf("第一天共摘%d个桃子。\n",peach(10));
	return 0;
}

int peach(int n)
{
	if(n==1)										//设第10天n=1 
		return 1;
	else 
		return (peach(n-1)+1)*2;
} 


