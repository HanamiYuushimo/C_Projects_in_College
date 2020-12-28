#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("请输入三个整数，用空格隔开\n");
    scanf("%d%d%d",&a,&b,&c);
    d=min(a,b);
    d=min(d,c);
    printf("%d,%d和%d中的较小数为：%d\n",a,b,c,d);
    return 0;
}

int min(int x,int y)
{
    int z;
    if(x<y) z=x;
    else z=y;
    return z;
}
