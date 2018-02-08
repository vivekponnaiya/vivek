#include<stdio.h>
#include<conio.h>
void main()
{
  int v,b=0,t;
  long int n;
  clrscr();
  printf("Enter the number");
  scanf("%ld",&n);
  t=n;
  while(n!=0)
  {
  v=n%10;
  b=b+(v*v*v);
  n=n/10;
  }
  if(v==t)
  {
  printf("Yes");
  }
  else
  {
  printf("No");
  }
  getch();
 } 
