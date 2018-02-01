#include <stdio.h>
int main()
{
int v, num, rev = 0;
printf("Enter any number to check palindrome: ");
scanf("%d", &v);
num = v; 
while(v!= 0)
{
rev = (rev * 10) + (v % 10);
 v  /= 10;
}
if(rev == num)
{
 printf("%d is palindrome.", num);
 }
 else
 {
 printf("%d is not palindrome.", num);
 }
return 0;
}
