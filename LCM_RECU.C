#include<stdio.h>
#include<conio.h>
int gcd(int n1, int n2)
{
 if(n2==0) return n1;
 else return (gcd(n2,n1%n2));
}
void main()
{
 int a,b,GCD;
 clrscr();
 printf("\nENTER THE TWO NUMBERS :");
 scanf("%d %d",&a,&b);
 GCD=gcd(a,b);
 printf("\nLCM IS %d",(a*b)/GCD);
 getch();
}
