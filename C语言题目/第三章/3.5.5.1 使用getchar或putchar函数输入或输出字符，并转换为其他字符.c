#include <stdio.h>
int main()
{
    char a,b,c;
    a=getchar();
    b=getchar();
    c=getchar();        //使用getchar函数输入字符
    a=a+5;
    b=b+8;
    c=c+3;              //将输入的字符转换为其他字符
    putchar(a);
    putchar(b);
    putchar(c);         //输出转换后的字符
    return 0;
}
//例如：输入"boy"（不含双引号），则输出"gw|"。
