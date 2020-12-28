#include <stdio.h>
int main()
{
    int a,b,c;
    printf("请输入两个整数，用空格隔开：");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("%d+%d=%d\n",a,b,c);
    return 0;
}
