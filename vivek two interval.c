#include <stdio.h>
int main() 
{
int v,i,p;
printf("enter the a,b values");
scanf("%d",&v,&i);
 printf("\nenter the odd no or even num a,b");
 for(p=v;p<=i;p++)
 {
 	if(p%2==0)
 	{
 	printf("%d\t",p);
 }
 }
	return 0;
}
