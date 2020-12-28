#include <stdio.h>
//同课本P14第6题
int main()
{
    int a,b,c,d;
    printf("请输入三个整数，用空格隔开\n");
    scanf("%d%d%d",&a,&b,&d);
    c=max(a,b,d);
    printf("%d、%d和%d中的较大数为：%d\n",a,b,d,c);
    return 0;
}

int max(int a,int b,int d)
{
    int c;
    if(a>b) c=a;
    else c=b;
    if(a>d) c=a;
    else c=d;
    return c;
}
