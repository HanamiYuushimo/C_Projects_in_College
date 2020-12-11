#include <stdio.h>
int main()
{
    int a,b,c;
    printf("请输入两个整数，用空格隔开\n");
    scanf("%d%d",&a,&b);
    c=max(a,b);
    printf("%d和%d中的较大数为：%d。\n",a,b,c);
    return 0;
}

int max(int x,int y)
{
    int z;
    if(x>y) z=x;
    else z=y;
    return z;
}
