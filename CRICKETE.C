#include<stdio.h>
#include<conio.h>
struct cricket
{
 char name[20];
 int runs;
 int wickets;
 float avg;
};
void main()
{
 struct cricket c[10];
 int n,i;
 float x;
 clrscr();
 printf("\nENTER THE NUMBER OF CRICKETERS :");
 scanf("%d",&n);
 printf("\nFOR DATA OF THE CRICKETERS :");
 for(i=0;i<n;i++)
 {
  printf("\nENTER NAME,RUNS,WICKETS,AVERAGE OF CRICKETER : ");
  flushall();
  gets(c[i].name);
  scanf("%d %d %f",&c[i].runs,&c[i].wickets,&x);
  c[i].avg=x;
 }
 printf("\nCRICKETER\tRUNS\tWICKETS\tAVERAGE :\n");
 for(i=0;i<n;i++)
 {
  printf("%s\t\t%d\t%d\t%f",c[i].name,c[i].runs,c[i].wickets,c[i].avg);
 }
 getch();
}


