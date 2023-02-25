#include<stdio.h>
#include<conio.h>
void main()
{
 int ctr=0,i,n,a[10],j;
 clrscr();
 printf("\nENTER THE NUMBER OF ELEMENTS IN ARRAY:");
 scanf("%d",&n);
 printf("\nFOR ELEMENTS OF ARRAY:");
 for(i=0;i<n;i++)
 {
  printf("\nENTER A VALUE:");
  scanf("%d",&a[i]);
 }
 printf("\nTHE UNIQUE ELEMENTS OF ARRAY ARE:");
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   if(a[i]==a[j])
    ctr++;
  }
  if(ctr==0)
   printf("\n%d",a[i]);
  }
  getch();

}
