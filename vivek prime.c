#include <stdio.h>
int main(void) {
int v;
printf("enter the num=");
scanf("%d",&v);
if((v%2==0)&&(v%3==0))
{
	printf("\nThe number %dis not prime:",v);
}
else
{
	printf("\nThe number %dis prime:",v);
}
return 0;
}
