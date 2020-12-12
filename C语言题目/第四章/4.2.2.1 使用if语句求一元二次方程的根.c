#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,d,p,q,x1,x2;
    printf("请输入一元二次方程中a,b,c的值，用空格隔开：");
    scanf("%lf%lf%lf",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>=0)
    {
        p=-b/(2*a);
        q=sqrt(d)/(2*a);
        x1=p+q;
        x2=p-q;
        printf("x1=%.2f,x2=%.2f\n",x1,x2);
    }
    else
    {
        printf("此方程无实根。\n");
    }
  	return 0;
}
