#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char str[20],new[20];
 int len,i,j=0;
 clrscr();
 printf("\nENTER THE STRING: ");
 gets(str);
 strupr(str);
 len=strlen(str);
 for(i=0;i<len;i++)
 {
  if(str[i]!='A' || str[i]!='E' ||str[i]!='I' || str[i]!='O' || str[i]!='U')
  {
   new[j]=str[i];
   j++;
  }
 }
 new[j]='\0';
 printf("\nTHE NEW STRING IS : ");
 puts(new);
 getch();
}

