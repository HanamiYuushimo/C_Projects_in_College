#include <stdio.h>
int main()
{
    int sign=1,deno=2;
    double sum=1.0;
    while(deno<=100)
    {
        sign=sign*(-1);
        sum=sum+sign*(1/deno);
        deno=deno+1;
    }
    printf("1-1/2+1/3-...+1/99-1/100=%f\n",sum);
    return 0;
}
