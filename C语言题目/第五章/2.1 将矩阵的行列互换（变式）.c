#include <stdio.h>
int main()
{
    int i, j, n = 0;
    for (i = 1; i <= 5; i++)
        for (j = 1; j <= 4; j++,n++)
        {
            if (n % 5 == 0) printf("\n");
            printf("%d\t", i * j);
        }
    printf("\n");
    return 0;
}
