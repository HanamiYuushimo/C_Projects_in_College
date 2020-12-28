include <stdio.h>
int main()
{
  double f,p,w,s,d;
  printf("请输入你要运货的单价、重量、距离，用空格隔开：");
  scanf("%lf%lf%lf",&p,&w,&s);
  if(s<250) d=0;
  else if(s<500) d=0.02;
       else if(s<1000) d=0.05;
            else if(s<2000) d=0.08;
                 else if(s<3000) d=0.10;
                      else d=0.15;
  f=p*w*s*(1-d);
  printf("您的最终运费为%.lf",f);
  return 0;
}
