#include<stdio.h>
#include<conio.h>
void main()
{
 int n,a[10],i;
 clrscr();
 printf("\nENTER THE NUMBER OF ELEMENTS IN ARRAY:");
 scanf("%d",&n);
 printf("\nFOR ELEMENTS OF ARRAY: ");
 for(i=0;i<n;i++)
 {
  printf("\nENTER A VALUE: ");
  scanf("%d",&a[i]);
 }
 printf("displaying the array:\n");
 for(i=0;i<n;i++)
 {
  printf("%d\n",*(a+i));
 }
 getch();
}

