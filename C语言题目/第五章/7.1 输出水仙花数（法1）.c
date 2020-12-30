#include <stdio.h>
int main()
{
    int i,j,k;             //分别定义百位、十位、个位数字
    for(i=1;i<=9;i++)
    {
        for(j=0;j<=9;j++)
        {
            for(k=0;k<=9;k++)
            {
                if(i*i*i+j*j*j+k*k*k==i*100+j*10+k)
                    printf("%d%d%d是水仙花数.\n",i,j,k);
            }
        }
    }
    return 0;
}
