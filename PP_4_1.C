#include<stdio.h>
#include<conio.h>
int Cube(int n)
{
 return n*n*n;
}
void main()
{
 int n,cube;
 clrscr();
 printf("enter the number:");
 scanf("%d",&n);
 cube=Cube(n);
 printf("\nCUBE OF %d is %d ",n,cube);
 getch();
}
