#include <stdio.h>
//��Բ�ܳ��������������
int main()
{
    double r, c, s, v;
    printf("������Բ�İ뾶��");
    scanf_s("%lf", &r);
    c = 2 * 3.14 * r;
    s = 3.14 * r * r;
    v = 4 / 3 * 3.14 * r * r * r;
    printf("Բ���ܳ�Ϊ��%f\nԲ�����Ϊ��%f\n������Ϊ��%f\n", c, s, v);
    return 0;
}