#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],i,j,n,max,second;
 clrscr();
 printf("\nENTER THE NUMBER OF ELEMNTS:");
 scanf("%d",&n);
 printf("\nFOR ELEMENTS OF ARRAY:");
 for(i=0;i<n;i++)
 {
  printf("\nENTER A VALUE:");
  scanf("%d",&a[i]);
 }
 max=a[0];
 for(i=0;i<n;i++)
 {
  if(max<a[i])
   max=a[i];
 }
 second=a[0];
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   if(a[i]>a[j] && a[i]<max)
    second=a[i];
   }
 }
 printf("\nTHE SECOND LARGEST ELEMENT IS: %d",second);
 getch();
}
