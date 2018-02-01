#include <stdio.h>
int main()
{
    int v,count=0;
    printf("\n enter num");
    scanf("%d",&v);
    while(v!=0)
    {
        v=v/10;
        count++;
    }
printf("\n %d",count++);
return 0;
}
