#include <stdio.h>
#include <math.h>
int main()
{
	int d, p;
	double r, m, n;
	d = 300000;
	p = 6000;
	r = 0.01;
	n = p - d * r;
	m = log(p / n) / log(1 + r);
	printf("需要%.1f个月能还清。", m);
	return 0;
}
