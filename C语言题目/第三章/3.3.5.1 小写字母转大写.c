#include <stdio.h>
int main()
{
    char c;
    printf("请输入一个小写字母：");
    scanf("%c",&c);
    c=c-32;
    printf("大写为：%c\n",c);
    return 0;
}
//同理可实现大写字母转小写。
