#include <stdio.h>
//同课本P14第6题
int main()
{
    int a,b,c,max;
    printf("请输入三个整数，用空格隔开：");
    scanf("%d%d%d",&a,&b,&c);
    max=a;
    if(max<b) max=b;
    if(max<c) max=c;
    printf("最大值为%d。\n");
    return 0;
}
