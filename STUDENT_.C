#include<stdio.h>
#include<conio.h>
struct student
{
 char name[20];
 int roll;
};




void main()
{
 struct student s[10],temp;
 int n,i,j;
 clrscr();
 printf("\nENTER THE NUMBER OF STUDENTS :");
 scanf("%d",&n);
 printf("\nFOR DETAILS OF STUDENTS  :");
 for(i=0;i<n;i++)
 {
  printf("\nENTER NAME:");
  flushall();
  gets(s[i].name);
  printf("\nENTER ROL NUMBER :");
  scanf("%d",&s[i].roll);
 }
 for(i=0;i<n-1;i++)
 {
  for(j=i+1;j<n;j++)
  {

  if(s[i].roll>s[j].roll)
  {
   temp=s[i];
   s[i]=s[j];
   s[j]=temp;
  }

 }
 }
 printf("\nTHE SORTED LIST IS :\n");
 printf("\nNAME\tROLL NUMBER\n");
 for(i=0;i<n;i++)
 {
  printf("%s\t%d\n",s[i].name,s[i].roll);
 }
 getch();

}
