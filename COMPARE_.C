#include<stdio.h>
#include<conio.h>
int compare(char *a[20],char *b[20])
{
 int i=0;
 while(*(a+i)!='\0' && *(b+i)!='\0')
 {

  if(*(a+i)==*(b+i))
  {
  return 1;

  }
  i++;
 }
  return 0;
}

void main()
{
 char a[20],b[20];
 int result;
 clrscr();
 printf("\nENTER THE FIRST STRING:");
 gets(a);
 printf("\nENTER THE SECOND STRING:");
 gets(b);
 result=compare(a,b);
 if(result==1) printf("\nequal");
 else printf("inequal");

 getch();
}