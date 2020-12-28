#include <stdio.h>
int main()
{
  double f,p,w,s,d;
  printf("请输入你要运货的单价、重量、距离，用空格隔开：");
  scanf("%lf%lf%lf",&p,&w,&s);
  switch(s/250)
  {
    case 0:d=0;break;
    case 1:d=0.02;break;
    case 2:
    case 3:d=0.05;break;
    case 4:
    case 5:
    case 6:
    case 7:d=0.08;break;
    case 8:
    case 9:
    case 10:
    case 11:d=0.1;break;
    default:d=0.15;
  }
  f=p*w*s*(1-d);
  printf("您的最终运费为%.lf",f);
  return 0;
}
