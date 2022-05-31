#include<stdio.h>
int main()
{ int a=34,r;
printf("a=%d\n",a);
a--;
printf("--a=%d\n",a);
--a;
printf("--a=%d\n",a);
r=a--;
printf("r=%d,a=%d\n",r,a);
r=--a;
printf("r=%d,a=%d\n",r,a);
}



a=34
--a=33
--a=32
r=32,a=31
r=30,a=30