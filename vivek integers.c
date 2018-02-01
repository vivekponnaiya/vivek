#include<stdio.h>
void main()
{
    int j,v,p,sum=0;
    scanf("%d",&v);
    for(j=0;j<v;j++)
    {
        scanf("%d",&p);
        sum=sum+p;
    }
    printf("%d",sum);
}
