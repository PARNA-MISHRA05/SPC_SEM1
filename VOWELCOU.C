#include<stdio.h>
#include<conio.h>
void main()
{
  char a[100];
  int i=0,vowel=0,conso=0;
  clrscr();
  printf("\nENTER THE STRING :");
  gets(a);
  strupr(a);
  for(i=0;a[i]!='\0';i++)
  {
   if(a[i]=='A' || a[i]=='E' || a[i]=='O' || a[i]=='U')
    vowel++;
   else
    conso++;
  }
  printf("\nVOWELS ARE %d and CONSONANTS are %d",vowel,conso);



getch();

}
