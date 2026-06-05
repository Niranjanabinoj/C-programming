#include<stdio.h>
void main()
{
  char ch;
  printf("enter input string:");
  scanf("%s",&ch);
  if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
  {
     printf("character is vowel");
  }
  else
  {
    printf("character is consonant");
  }
}
