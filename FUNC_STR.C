#include<stdio.h>
#include<conio.h>
struct student
{
 char name[50];
 char grades;
 int roll;
};

void display(struct student *s,int n)
{
 int i;
 printf("\nROLL NO.\tNAME\tGRADES\n ");
 printf("--------------------------\n");
 for(i=0;i<n;i++)
 {
  printf("%d\t\t%s\t%c\n",s[i].roll,s[i].name,s[i].grades);
 }
}




void main()
{
 struct student s[10];
 int i,n;
 clrscr();
 printf("\nENTER THE NUMBER OF STUDENTS :");
 scanf("%d",&n);
 printf("\nFOR DETAILS OF STUDENTS:\n");
 for(i=0;i<n;i++)
 {
  printf("STUDENT %d",i+1);
  flushall();
  printf("\nNAME:");

  gets(s[i].name);
  printf("GRADES:");
  flushall();
  scanf("%c",&s[i].grades);
  printf("\nROLL NUMBER :");
  scanf("%d",&s[i].roll);
 }
 printf("\nINFO DISPLAY :\n");
 display(s,n);
getch();

}
