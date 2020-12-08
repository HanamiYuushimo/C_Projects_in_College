#include <stdio.h>
//利用函数实现输出200-300间的素数 
int main(int argc, char *argv[])
{
	void sushu();
	sushu();
	return 0;
}

void sushu()
{
	int i,j;
	for(i=200;i<=300;i++)
	{
		for(j=2;j<=i-1;j++)
			if(i%j==0) break;
		if(j>=i) printf("%d\t",i);
	}
} 
