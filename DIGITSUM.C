#include<stdio.h>
#include<conio.h>
void main()
{
 int number,digit,sum=0;
 clrscr();
 printf("ENTER THE NUMBER: ");
 scanf("%d",&number);
 while(number!=0)
 {
  digit=number%10;
  sum+=digit;
  number/=10;
 }
 printf("\nTHE SUM OF DIGITS IS %d ",sum);
 getch();
}