#include<stdio.h>
void main()
{
int a[50],i,j,max;
printf("enter the range");
scanf("%d",&j);
printf("enter the array values");
for(i=0;i<j;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<j;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("%d",max);
}
