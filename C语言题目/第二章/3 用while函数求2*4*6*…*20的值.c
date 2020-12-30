#include <stdio.h>
int main()
{
    int p=2,i=4;
    while(i<=18)
    {
        p=p*i;
        i=i+2;
    }
    printf("2*4*6*...*20=%d\n",p);
    return 0;
}
