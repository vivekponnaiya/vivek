#include<stdio.h>
int main()
{
    int v,a,b,c,result=0,z,t;
    printf("please enter a three digit interval:");
    scanf("%d%d",&a,&b);
    for(v=a;v<=b;v++)
    {
        z=v;
     while(z!=0)
     {
      c=z%10;
      result=result+c*c*c;
      z=z/10;
     }
     if(z==result)
     printf("%d",z);
     }
     return 0;
    }
