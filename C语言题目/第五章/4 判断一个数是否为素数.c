#include <stdio.h>
int main()
{
    int n,i;
    printf("请输入一个整数：");
    scanf("%d",&n);
    for(i=2;i<n;i++)
        if(n%i==0)break;
        if(i<n) printf("%d不是素数。\n",n);
        else printf("%d是素数。\n",n);
    return 0;
}
