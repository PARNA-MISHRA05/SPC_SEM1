#include<stdio.h>
#include<conio.h>

struct name
{
 char fname[20];
 char sname[20];
}


struct student
{
 int roll;
 struct name n;

}
void main()
{
 struct student s;
 clrscr();
 printf("\nENTER NAME AND ROLL NUMBER:");
 scanf("%s %s %d",s.n.fname,s.n.sname,&s.roll);
 printf("%s %s %d",s.n.fname,s.n.sname,s.roll);
 getch();
}

