#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,k;
 clrscr();
 for(i=1;i<=5;i++)
 {
  for(j=0;j<5-i;j++)
  {
   printf(" ");
  }
  for(j=0;j<i;j++)
  {
   printf("*");
  }
  for(k=i-1;k>=1;k--)
  {
   printf("*");
  }
  printf("\n");
 }
 for(i=5-1;i>=1;i--)
 {
  for(j=0;j<5-i;j++)
  {
   printf(" ");
  }
  for(j=0;j<i;j++)
  {
   printf("*");
  }
  for(k=i-1;k>=1;k--)
  {
   printf("*");
  }
  printf("\n");

 }
 getch();
}

