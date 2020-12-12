#include <stdio.h>
//同习题P108第6题
int main()
{
	  int x,y;
    printf("请输入一个整数：");
    scanf("%d",&x);
    if(x<1) y=x;
    else
        if(x<10) y=2*x-1;
        else y=3*x-11;
    printf("x=%d,y=%d\n",x,y);
  	return 0;
}
