#include<stdio.h>
#include<conio.h>
int product(int n1,int n2)
{
 if(n2==0) return 0;
 else if(n2>0)
  return (n1+product(n1,n2-1);
 else
  return(n1-product(n1,n2+1);
}
void main()
{
 int a,b,prod;
 clrscr();
 scanf("%d %d",&a,&b);
 prod=product(a,b);
 printf("\n%d",prod);
 getch();
}
