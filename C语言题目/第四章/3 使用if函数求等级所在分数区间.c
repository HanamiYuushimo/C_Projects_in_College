#include <stdio.h>
int main()
{
    char score;
    printf("请输入一个等级制成绩：");
    scanf("%c",&score);
    if(score=='A'||score=='a') printf("90~100");
    else if(score=='B'||score=='b') printf("80~89");
         else if(score=='C'||score=='c') printf("70~79");
              else if(score=='D'||score=='d') printf("60~69");
                   else if(score=='E'||score=='e') printf("<60");
                        else printf("您输入有误！");
    return 0;
}
