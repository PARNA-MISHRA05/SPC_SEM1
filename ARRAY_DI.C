#include<stdio.h>
#include<conio.h>

void display(int a[],int n)
{
 if(n==0) return;
 else
 {
  display(a,n-1);
  printf("\n%d",a[n-1]);
 }

}
void main()
{
 int a[10],result,n,i;
 clrscr();
 printf("\nENTER THE NUMBER OF ELEMNTS IN ARRAY: ");
 scanf("%d",&n);
 printf("\nFOR ELEMENTS OF ARRAY :");
 for(i=0;i<n;i++)
 {
  printf("\nENTER A VALUE: ");
  scanf("%d",&a[i]);
 }
 display(a,n);
 getch();
}

