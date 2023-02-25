#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10][10],m,n,i,j,flag=0;
 clrscr();
 printf("\nENTER THE ROWS AND COLUMNS OF THE MATRIX :");
 scanf("%d %d",&m,&n);
 if(m==n)
 {
  printf("\nFOR ELEMENTS OF MATRIX: ");
  for(i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
   {
     printf("\nENTER A VALUE: ");
     scanf("%d",&a[i][j]);
   }
  }
  for(i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
   {
    if(i==j)
    {
     if(a[i][j]!=1)
      flag++;
    }
    else
    {
     if(a[i][j]!=0)
     flag++;
    }
   }
  }
  if(flag==0) printf("\nIDENTITY MATRIX");
  else printf("\nNOT AN IDENTITY MATRIX");
 }
 else
  printf("\n NOT AN IDENTITIY MATRIX");
 getch();
}

