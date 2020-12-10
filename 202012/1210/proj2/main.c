#include <stdio.h>

int main(int argc, char *argv[])
{
	double n,x;
	double p(double n,double x);
	printf("ÇëÊäÈën,xµÄÖµ£º");
	scanf("%lf%lf",&n,&x);
	printf("P=%f\n",p(n,x));
	return 0;
}

double p(double n,double x)
{
	if(n==0)
		return 1;
	else if(n==1)
		return x;
	else return ((2*n-1)*x-p(n-1,x)-(n-1)*p(n-2,x))/n;
}
