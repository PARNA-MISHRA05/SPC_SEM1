#include<stdio.h>
#include<conio.h>
void main()
{
 char str[200];
 int line=1,word=0,ch=0,i=0;
 clrscr();
 printf("\nENTER THE STRING:");
 scanf("%[^.]s",&str);
 for(i=0;str[i]!='\0';i++)
 {
  if(str[i]=='\n')
  {
   line++;
   word++;
  }
  else
  {
   if(str[i]==' ' || str[i]=='\t')
   {
    word++;
    ch++;
   }
   else
   {
   ch++;
   }
  }
 }
 printf("\nLINES= %d\nWORDS: %d\nCHARACTERS: %d",line,word,ch);

 getch();
}