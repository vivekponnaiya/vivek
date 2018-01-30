 #include<stdio.h>
int main()
{
char a;
printf("enter the alphabet\v");
scanf("%c",&a);
if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
printf("vowel\v",a);
else
printf("consonant\v",a);
return 0;
}
