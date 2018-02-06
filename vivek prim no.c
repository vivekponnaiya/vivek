#include<stdio.h>
int main()
{
int v,i,p,c;
printf("Enter any two numbers:");
scanf("%d%d",&v,&i);
printf("Prime numbers between %d and %d are:",v,i);
while(v<i)
{
c=0;
for(p=2;p<=v/2;++p)
{
if(v%p==0)
{
c=1;
break;
}
}
if(c==0)
printf("%d",v);
++v;
}
return 0;
}
