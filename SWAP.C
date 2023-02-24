#include<stdio.h>
#include<conio.h>
void main()
{
 int num1,num2,temp;
 clrscr();
 printf("ENTER THE TWO NUMBERS: ");
 scanf("%d %d",&num1,&num2);
 printf("\nTHE ORIGINAL VALUES ARE num1=%d and num2=%d ",num1,num2);
 temp=num1;
 num1=num2;
 num2=temp;
 printf("\nTHE SWAPPED VALUES ARE %d AND %d ",num1,num2);
 getch();
}

