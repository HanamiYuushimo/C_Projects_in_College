#include <stdio.h>
int main()
{
    char score;
    printf("请输入一个等级制成绩：");
    scanf("%c",&score);
    switch(score)
    {
        case 'A':
        case 'a':printf("90~100");break;
        case 'B':
        case 'b':printf("80~89");break;
        case 'C':
        case 'c':printf("70~79");break;
        case 'D':
        case 'd':printf("60~69");break;
        case 'E':
        case 'e':printf("<60");break;
        default:printf("您输入有误！\n")
    }
    return 0;
}
