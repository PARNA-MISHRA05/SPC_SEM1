#include<stdio.h>
#include<conio.h>
struct book
{
 char title[20];
 struct
 {
  char fname[20];
  char sname[20];
 }name;
 struct
 {
  char fname[20];
  char sname[20];
 }pub;

 int isbn;
 int edition;
};
void main()
{
 struct book b[10];
 int n,i;
 clrscr();
 printf("\nENTER THE NUMBER OF BOOK :");
 scanf("%d",&n);
 printf("\nFOR INFO OF BOOK :");
 for(i=0;i<n;i++)
 {
  printf("\nFOR BOOK %d",i+1);
  printf("\nTITLE:");
  flushall();
  gets(b[i].title);

  printf("\nNAME: ");
  flushall();
  scanf("%s %s",b[i].name.fname,b[i].name.sname);
  printf("\nPUBLISHER NAME: ");
  flushall();
  scanf("%s %s",b[i].pub.fname,b[i].pub.sname);
  printf("EDITION  :");
  scanf("%d",&b[i].edition);
  printf("ISBN");
  scanf("%d",&b[i].isbn);
 }
 printf("\nTITLE\t\tAUTHOR\t\tPUBLISHER\tEDITION\tISBNV\n");
 for(i=0;i<n;i++)
 {
 printf("%s\t%s %s\t%s %s\t%d\t%d\n",b[i].title,b[i].name.fname,b[i].name.sname,b[i].pub.fname,b[i].pub.sname,b[i].edition,b[i].isbn);
 }
 getch();
}
