//copy one array into another using pointer
//PARNA MISHRA D083 SAP:60009220201

#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],b[10],size,i;
 clrscr();
 printf("\nENTER THE NUMBER OF ELEMENTS IN ARRAY: ");
 scanf("%d",&size);
 printf("\nFOR ELEMENTS OF ARRAY:\n");
 for(i=0;i<size;i++)
 {
  printf("\nENTER A VALUE: ");
  scanf("%d",&a[i]);
 }
 for(i=0;i<size;i++)
 {
  *(b+i)=*(a+i);
 }
 printf("\nELEMENT OF SECOND ARRAY:\n");
 for(i=0;i<size;i++)
 {
  printf("%d\n",*(b+i));
 }
 getch();
}