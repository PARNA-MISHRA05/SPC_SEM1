#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],min,max,i,size;
 clrscr();
 printf("\nENTER THE NUMBER OF ELEMENTS IN ARRAY: ");
 scanf("%d",&size);
 printf("\nFOR ELEMENTS OF LIST:\n ");
 for(i=0;i<size;i++)
 {
  printf("\nENTER A VALUE: ");
  scanf("%d",&a[i]);
 }
 max=a[0];
 min=a[0];
 for(i=0;i<size;i++)
 {
  if(max<a[i])
   max=a[i];

   if(min>a[i])
   min=a[i];
 }
 printf("\nLARGEST ELEMENTS IS %d AND SMALLEST ELEMENT IS %d ",max,min);
 getch();
}