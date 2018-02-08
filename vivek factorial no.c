#include<stdio.h>
#include<conio.h>
void main()
{
int v, i;
clrscr();
unsigned long long factorial = 1;
printf("Enter an integer: ");
scanf("%d",&v);
if (v < 0)
printf("Error! Factorial of a negative number doesn't exist.");
else
{
for(i=1; i<=v; ++i)
{
factorial *= i;             
}
printf("Factorial of %d = %llu", v, factorial);
}
return 0;
getch();
}
