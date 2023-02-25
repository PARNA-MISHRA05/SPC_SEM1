#include<stdio.h>
#include<conio.h>
struct student
{
 char name[20];
 int roll;
 int marks;
};


void main()
{
 struct student s[10];
 int i,n;
 clrscr();
 printf("\nENTER THE NUMBER OF STUDENT ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("\nENTER THE NAME,ROLL NUMBER AND MARKS OF STUDENT");
  scanf("%s %d %d",&s[i].name,&s[i].roll,&s[i].marks);
 }
 printf("\nDETAILS: ");
 printf("\nNAME\tROLL NUMBER\t MARKS\n");
 for(i=0;i<n;i++)
 {
  printf("%s\t%d\t\t%d\n",s[i].name,s[i].roll,s[i].marks);
 }
 getch();
}
