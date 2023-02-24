#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10][10],b[10][10],c[10][10],i,j,k,m,n,p,q;
 clrscr();
 printf("\NENTER THE NO. OF ROWS AND COLUMNS FOR A: ");
 scanf("%d %d",&m,&n);
 printf("\nENTER THE NO. OF ROWS AND COLUMNS FOR B: ");
 scanf("%d %d",&p,&q);
 if(n==p)
 {
  printf("\nFOR MATRIX A:\n");
  for(i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
    {
     printf("\nENTER A VALUE:" );
     scanf("%d",&a[i][j]);
    }
  }

  printf("\nFOR MATRIX B:\n");
  for(i=0;i<p;i++)
  {
   for(j=0;j<q;j++)
    {
     printf("\nENTER A VALUE:" );
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

  printf("\n THE MULTIPLED MATRIX IS: \n");
  for(i=0;i<m;i++)
  {
   for(j=0;j<q;j++)
   {
    printf("%d\t",c[i][j]);
   }
   printf("\n");
 } }



  else
   printf("CANT BE MULTIPLIED");

  getch();
 }

