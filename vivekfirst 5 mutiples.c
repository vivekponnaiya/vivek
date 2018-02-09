#include <stdio.h>
int main()
{
    int v, i;

    printf("Enter an integer: ");
    scanf("%d",&v);

    for(i=1; i<=10; ++i)
    {
       printf("\n%d",v*i);
    }
}
