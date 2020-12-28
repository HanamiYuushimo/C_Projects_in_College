#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,s,area;
    printf("请输入三角形的三条边长，用空格隔开：\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("三角形面积为：%f",area);
    return 0;
}
//注意：该程序无法判断是否为三角形（两边之和大于第三边，两边之差小于第三边）。
