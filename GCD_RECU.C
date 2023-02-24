#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10][10],m,n,i,j;
 clrscr();
 printf("ENTER THE NUMBER OF ROWS AND COLUMNS:");
 scanf("%d %d",&m,&n);

 printf("\nFOR MATRIX A:");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
  printf("\nENTER THE VALUE: ");
  scanf("%d",&a[i][j]);}
 }
 printf("\nTHE ENTERED MATRIX IS:\n");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   printf("%d\t",a[i][j]);
  }
  printf("\n");
 }

 printf("\nTRANSPOSE:\n");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   printf("%d\t",a[j][i]);
  }printf("\n");

 }
 getch();
}

