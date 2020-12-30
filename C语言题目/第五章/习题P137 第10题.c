#include <stdio.h>
int main()
{
    int i;
    double a=2;b=1;c;sum=0;
    for(i=1;i<=20;i++)
    {
        sum=sum+a/b;
        c=a;
        a=a+b;
        b=c;
    }
    printf("数列前20项之和为%f.",sum);
    return 0;
}
