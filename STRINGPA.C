#include<stdio.h>
#include<conio.h>

int ispalindrome(char str[])
{
 int len,i;
 len=strlen(str);
 for(i=0;i<len/2;i++)
 {
  if(str[i]!= str[len-i-1])
   return 0;
 }
 return 1;
}
void main()
{
 char str[20];
 int result;
 clrscr();
 printf("\nENTER THE STRING :");
 scanf("%s",&str);
 result=ispalindrome(str);
 if(result==0)
  printf("\nNOT A PALINDROME");
 else
  printf("\nPALINDROME");
 getch();
}