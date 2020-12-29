#include <stdio.h>
//代码来自CSDN用户 @肝肠寸断
//原帖链接：https://blog.csdn.net/weixin_43534549/article/details/86700886
int main()
{
    int n=0,i;
    for(n=100;n<=200;n++)
    {
        for(i=2;i<n;i++)
            if(n%i==0) break;
            if(i>=n)
                printf("%d\t",n)
    }
    printf("\n")
    return 0;
}
