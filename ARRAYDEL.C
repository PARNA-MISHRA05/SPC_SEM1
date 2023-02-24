#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],size,i,pos;
 clrscr();
 printf("\nENTER THE NUMBER OF ELEMENTS IN ARRAY: ");
 scanf("%d",&size);
 printf("ENTER THE POSITION FROM WHERE ELEMENT IS TO BE DELETED:");
 scanf("%d",&pos);
 if(pos<=size)
 {
  printf("\nFOR ELEMENTS OF ARRAY :\n");
  for(i=0;i<size;i++)
  {
   printf("\nENTER A VALUE: ");
   scanf("%d",&a[i]);
  }
  for(i=pos-1;i<size-1;i++)
  {
   a[i]=a[i+1];
  }
  printf("\nARRAY AFTER DELETING THE ELEMENT:\n");
  for(i=0;i<size-1;i++)
  {
   printf("%d\n",a[i]);
  }
 }
 else printf("\nPOSITION ENTERED IS INVALID ");
 getch();
}

