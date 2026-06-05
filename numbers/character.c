#include<stdio.h>
#include<ctype.h>
void main()
{
char c;
printf("enter a character:");
scanf("%c",&c);
if(isalpha(c))
{
   printf("it is a character:");
}
else
{
   printf("not a character");
}
}
