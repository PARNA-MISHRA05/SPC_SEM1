#include<stdio.h>
#include<conio.h>

int check(int n)
{
 int digits,sum=0;
 while(n!=0)
 {
  digits=n%10;
  sum=sum*10+digits;
  n/=10;
 }

 return sum;
}

void main()
{
 int n,result;
 clrscr();
 printf("enter the number: ");
 scanf("%d",&n);
 result=check(n);
 if(result==n) printf("PALINDROME");
 else
  printf("\nNOT A PALINDROMW");
 getch();
}
