#include<stdio.h>
#include<conio.h>
struct employee
{
 char name[20];
 float salary;
};
void main()
{
 struct employee e[20],temp;
 int i,n,j;
 float x;
 clrscr();
 printf("\nENTER THE NUMBER OF EMPLOYEES :");
 scanf("%d",&n);
 printf("\nFOR DETAILS :");
 for(i=0;i<n;i++)
 {
  printf("\nFOR EMPLOYEE %d",i+1);
  printf("\nNAME : ");
  flushall();
  gets(e[i].name);
  printf("\nSALARY :");
  scanf("%f",&x);
  e[i].salary=x;
 }
 for(i=0;i<n-1;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(e[i].salary<e[j].salary)
   {
    temp=e[i];
    e[i]=e[j];
    e[j]=temp;
   }
  }
 }
 printf("\nSORTED LIST \nNAME\tSALARY\n");
 for(i=0;i<n;i++)
 {
  printf("%s\t%f\n",e[i].name,e[i].salary);
 }
 getch();
}
