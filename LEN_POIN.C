//LENGTH OF STRING USING POINTER
//PARNA MISHRA D083 SAP:60009220201


#include<stdio.h>
#include<conio.h>

void main()
{
 char str[50];
int len=0,i=0;
clrscr();
 printf("\nENTER THE STRING :");
 scanf("%s",str);
 while(*(str+i)!='\0')
 {
  len++;
  i++;
 }

 printf("\nLENGTH OF STRING IS %d ",len);
 getch();
}
