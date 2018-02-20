#include<stdio.h>
int main()
{
int b,o,x,i,sum=0;
scanf("%d %d %d",&b,&o,&x);
for(i=b;i>1;i--)
{
sum=sum+(o+(b-1)*x);
}
return 0;
}
