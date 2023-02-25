#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],b[10],c[20],i,j,m,n;
 clrscr();
 printf("\nENTER THE  NUMBER OF ELEMENTS IN A AND B:");
 scanf("%d %d",&m,&n);
 printf("\nFOR ELEMENTS OF A:");
 for(i=0;i<m;i++)
 {
  printf("\nenter a value:");
  scanf("%d",&a[i]);
 }
 printf("\nFOR ELEMENTS OF B:");
 for(i=0;i<n;i++)
 {
  printf("\nenter a value:");
  scanf("%d",&b[i]);
 }
 for(i=0,j=0;i<(m+n);i++)
 {
  if(i>=n)
  {
   c[i]=b[j];
   j++;
  }
  else
   c[i]=a[i];
 }
 printf("\nTHE COLLAB ARRAY IS:\n");
 for(i=0;i<(m+n);i++)
 {
  printf("\n%d",c[i]);
 }
 getch();
}

