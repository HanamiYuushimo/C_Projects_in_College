#include <stdio.h>
int main()
{
    int a[10], i, max, min, maxi, mini;
    printf("input 10 nums");
    for (i = 0; i < 10; i++)
    {
        scanf_s("%d", &a[i]);
    }
    max = min = a[0];
    for (i = 0; i < 10; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            maxi = i+1;
        }
        if (a[i] < min)
        {
            min = a[i];
            mini = i+1;
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("max=%d,min=%d\n", max, min);
    printf("max是第%d个数，min是第%d个数\n", maxi, mini);
    return 0;
}