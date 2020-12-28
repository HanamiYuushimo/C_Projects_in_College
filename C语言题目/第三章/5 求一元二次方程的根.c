#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,p,q,x1,x2;
    printf("请输入一元二次方程中a,b,c的值："&a,&b,&c);
    p=-b/(2*a);
    q=sqrt(b*b-4*a*c)/(2*a);
    x1=p+q;
    x2=p-q;
    printf("x1=%f,x2=%f\n",x1,x2);
    return 0;
}
//注意：该程序无法判断是否为实数根。
