#include<stdio.h>
#include<conio.h>
void main()
{
 int number,digit,counter=0;
 clrscr();
 printf("ENTER THE NUMBER:");
 scanf("%d",&number);
 while(number!=0)
 {
  number/=10;
  counter++;
 }
 printf("\nTHE NUMBER OF DIGITS ARE %d",counter);
 getch();
}


