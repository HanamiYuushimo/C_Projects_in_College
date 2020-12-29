#include <stdio.h>
//课本P129 例5.8,输出斐波那契数列的前40个数
int main()
{
    int f1=1,f2=1,f3;
    int i;
    printf("%12d\n%12d\n",f1,f2);
    for (i = 1; i <= 38; i++)
        for (j = 1; j <= 4; j++)
        {
            f3=f1+f2;
            printf("%12d\n",f3);
            f1=f2;
            f2=f3;
        }
    return 0;
}
