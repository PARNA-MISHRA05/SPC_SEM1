#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int number,reverse=0,sum=0,copy,digit;
 clrscr();
 printf("ENTER THE NUMBER:");
 scanf("%d",&number);
 for(copy=number;number!=0;number/=10)
 {
  digit=number%10;
  reverse=reverse*10+digit;
  sum+=digit;
 }
 printf("\nTHE SUM OF DIGITS IS %d",sum);
 printf("\nTHE NUMBER REVERSED IS %d",reverse);
 getch();
}


