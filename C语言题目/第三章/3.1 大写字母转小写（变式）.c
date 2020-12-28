#include <stdio.h>
int main()
{
    char c;
    printf("请输入一个小写字母：");
    scanf("%c",c);
    if(c>=97&&c<=122) c=c-32;      //97和122为ASCII码，可用'a'和'z'代替（包含单引号）
    printf("大写为：%c\n",c);
    return 0;
}
