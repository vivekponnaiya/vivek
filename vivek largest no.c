#include<stdio.h>
#include<conio.h>
void main()
{
int v,i,p;
printf("enter three numbers",v,i,p);
scanf("%d%d%d",&v,&i,&p);
{
if((v>i)||(v>p))
printf("%d is larger",v);
else if(i>p)
printf("%d is larger",i);
else
printf("%d is larger",p);
}
}
