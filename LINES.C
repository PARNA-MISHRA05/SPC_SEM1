#include<stdio.h>
#include<conio.h>

int Line(char str[50])
{
 int i=0,l=1;
 while(str[i]!='\0')
 {
  if(str[i]=='\n')
  l++;
 }
 return l;
}
int Words(char str[])
{
 int w=0,i=0;
 while(str[i]!='\0')
 {
  if(str[i]==' ' || str[i]=='\n')
  w++;
 }
 return w;
}
int Characters(char str[])
{
 int c=0,i=0;
 while(str[i]!='\0')
 {
 if(str[i]!=' '|| str[i]!='\n')

  c++;
  i++;
 }
 return c;
}

void main()
{
 char str[50];
 int lines,word,charac;
 clrscr();

 printf("\nENTER THE STRING: ");
 scanf("%[^.]s",&str);
 lines=Line(str);
 word=Word(str);
 charac=Characters(str);
 printf("\nLINES: %d\nWORDS: %d\nCHARACTERS(ignoring space and next line): %d",lines,word,charac);
 getch();
}
