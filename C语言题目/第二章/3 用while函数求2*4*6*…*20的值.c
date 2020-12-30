#include <stdio.h>
int main()
{
    double p=2,i=4;
    while(i<=20)
    {
        p=p*i;
        i=i+2;
    }
    printf("2*4*6*...*20=%f\n",p);
    return 0;
}
