#include <stdio.h>
//求圆周长、面积、球的体积
int main()
{
    double r, c, s, v;
    printf("请输入圆的半径：");
    scanf_s("%lf", &r);
    c = 2 * 3.14 * r;
    s = 3.14 * r * r;
    v = 4 / 3 * 3.14 * r * r * r;
    printf("圆的周长为：%f\n圆的面积为：%f\n球的体积为：%f\n", c, s, v);
    return 0;
}