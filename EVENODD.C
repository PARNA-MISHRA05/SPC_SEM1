#include<stdio.h>
#include<conio.h>
void main()
{
 int num;
 clrscr();
 printf("ENTER THE NUMBER: ");
 scanf("%d",&num);
 /*(if(num%2==0)
 printf("\n %d is even",num);
 else
 printf("\n %d is odd",num);*/
 (num%2==0)?printf("\n%d is even",num):printf("\n%d is odd",num);
 getch();
}
