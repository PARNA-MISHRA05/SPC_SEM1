#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10][10],b[10][10],c[10][10],m,n,p,q,i,j,k;
 clrscr();


  printf("\nFOR MATRIX A: ");
  printf("\nENTER THE NUMBER OF rows and columns: ");
  scanf("%d %d",&m,&n);
  printf("\nFOR MATRIX B: ");
  printf("\nENTER THE NUMBER OF rows and columns: ");
  scanf("%d %d",&p,&q);
  if(n==p)
  {
  printf("\nFOR ELEMENTS OF MATRIX A:\n ");
  for(i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
   {
    printf("\nENTER A VALUE: ");
    scanf("%d",&a[i][j]);
   }
  }

  printf("\nFOR ELEMENTS OF MATRIX B:\n ");
  for(i=0;i<p;i++)
  {
   for(j=0;j<q;j++)
   {
    printf("\nENTER A VALUE: ");
    scanf("%d",&b[i][j]);
   }
  }

  for(i=0;i<m;i++)
  {
   for(j=0;j<q;j++)
   {

    c[i][j]=0;
    for(k=0;k<n;k++)
    {
     c[i][j]+=a[i][k]*b[k][j];
    }
    }
   }
  printf("MATRIX A \n");
  for(i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
   {
    printf("%d\t",a[i][j]);

   }
   printf("\n");
  }
  printf("MATRIX B\n");
  for(i=0;i<p;i++)
  {
   for(j=0;j<q;j++)
   {
    printf("%d\t",b[i][j]);

   }
   printf("\n");
  }
  printf("\nMATRIX OBTAINED ON MULTIPLICATION:\n");
  for(i=0;i<m;i++)
  {
   for(j=0;j<q;j++)
   {
     printf("%d\t",c[i][j]);
   }
   printf("\n");
  }
 }
 else printf("MATRIX CANT BE MULTIPLIED");
 getch();
}


