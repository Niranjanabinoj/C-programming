#include<stdio.h>
void main()
{
int n;
printf("enter an integer:");
scanf("%d",&n);
int digit=0;
int temp;
while(n>0)
{
  temp=n%10;
  if (temp>=0)
  {
    digit+=1;
  }
  n=n/10;
}
printf("no of digit is %d",digit);
}
